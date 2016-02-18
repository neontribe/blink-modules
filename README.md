Dev Dependencies
=================
  * LAMP stack
  * Drush
  * https://github.com/jhedstrom/drupalextension

Create a new local dev copy
===========================
  * download a copy of the latest makefile blink.make to your ~/.drush (from this repo)
  * cd to local webserver site directory (e.g. /var/www)
  * run `drush make --working-copy ~/.drush/blink.make bananalink_local`
  * set up a sql user and db for the site and create bananalink_local/sites/default/settings.php
  * download the latest sql dump from live
  * import the live.sql into your local db
  * download the latest files tar.gz
  * unpack into bananalink_local/sites/default/
  // TODO incorporate this into the make and update
  * download and unpack CKEditor 3.6.4 into /sites/all/libraries
  * sudo chown -R www-data:www-data bananalink_local/sites/default/files


Deploy to Heroku for testing (todo auto on pull req merge)
============================
  * on heroku: `drush make blink.make bananalink_test`
  * on heroku: log in to mysql and  `GRANT ALL PRIVILEGES ON dr_blink_test.* To 'dr_blink_test'@'localhost' IDENTIFIED BY 'dr_blink_test';`
  * on live: cd to sites/deafult and `tar -cf latest.tar.gz` then scp
  * on live: dump latest.sql and scp
  // TODO incorporate this into the make and update
  * download and unpack CKEditor 3.6.4 into /sites/all/libraries
  * on heroku: cd into sites/default and unpack latest.tar.gz
  * on heroku: chown -R www-data:www-data files dir
  * on heroku: create settings.php with dr_blink_test db credentials and chmod 444
  * on heroku: `drush sqlc` `source latest.sql` `exit` mysql
  * on heroku: create robots.txt User-agent: * Disallow: /
  * on heroku: drush updb
  * TODO run some tests

Deploy to Release Candidate (todo auto on release tag)
===========================
  * drush make blink.make v0.x.x
  * uses dr_blink_rc database and user for now do not need to create versioned db
  * cp settings.php from no_rc into sites/default/
  * import latest.sql (drush sqlc, source /var/home/bananalink/latest.sql)
  * cp ckeditor library from /var/home/bananlink/sites/all/libraries into v0.x.x
  * cp robots.txt from no_rc
  * cp -r files from live
  * drush updb
  * rm rc && ln -s v0.x.x rc


Deploy to Production (manual flip symlink to approved rc release)
====================
  * cd to live site dir
  * `drush dl readonlymode` and `drush en readonlymode`
  * mysqldump latest.sql
  * rsync sites/default/files FROM live TO rc
  * cp sites/all/libraries/ckeditor FROM live TO rc
  * `rm rc && ln -s no_rc rc`
  * copy sites/default/settings.php FROM live TO v0.0.0 (approved rc target dir)
  * copy robots.txt FROM live to v0.0.0
  * cd to v0.0.0 and `drush sqlc`
  * `source latest.sql` and exit mysql shell
  * drush pm-disable readonlymodule
  * drush updb
  * TODO - run tests?
  * cd back to bananalink /var/home
  * rm live && ln -s v0.0.0 live


Dev Dependencies
=================
  * LAMP stack
	* Drush
  * github.com/neontribe/blink_theme and github.com/neontribe/blink_modules

Create a new local dev copy
===========================
  * download a copy of the latest makefile blink.make to your ~/.drush (from this repo)
	* cd to local webserver site directory (e.g. /var/www)
	* run `drush make --working-copy ~/.drush/blink.make bananalink_local`
	* set up a sql user and db for the site and create bananalink_local/sites/default/settings.php
	* download the latest sql dump from live
	* import the live.sql into your local db


TODO...  below

Deploy to Heroku for testing
============================
  * Automatic on every pull req merge


Deploy to Release Candidate
===========================
  * Automatic on release tag
	* store only 3 most recent releases


Deploy to Production
====================
  * Manual flip symlink from live to rc

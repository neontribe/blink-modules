<?php
/**
 * @file
 * Views definition for Blink Banner
 *
 * Copyright (c) 2016 Neontribe
 * see LICENSE.txt for details
 */

/**
 * Implements hook_views_default_views().
 */
function blink_cta_banners_views_default_views() {
  $view = new view();
  $view->name = 'single_node_banner_link';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Single node banner link';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Single node banner link';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Teaser image */
  $handler->display->display_options['fields']['field_teaser_image']['id'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['table'] = 'field_data_field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['field'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_image']['element_class'] = 'main-img';
  $handler->display->display_options['fields']['field_teaser_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_image']['settings'] = array(
    'image_style' => 'news_thumbnail',
    'image_link' => '',
  );
  /* Field: Link title */
  $handler->display->display_options['fields']['field_call_link']['id'] = 'field_call_link';
  $handler->display->display_options['fields']['field_call_link']['table'] = 'field_data_field_call_link';
  $handler->display->display_options['fields']['field_call_link']['field'] = 'field_call_link';
  $handler->display->display_options['fields']['field_call_link']['ui_name'] = 'Link title';
  $handler->display->display_options['fields']['field_call_link']['label'] = '';
  $handler->display->display_options['fields']['field_call_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_call_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_call_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_call_link']['type'] = 'link_title_plain';
  /* Field: link URL */
  $handler->display->display_options['fields']['field_call_link_1']['id'] = 'field_call_link_1';
  $handler->display->display_options['fields']['field_call_link_1']['table'] = 'field_data_field_call_link';
  $handler->display->display_options['fields']['field_call_link_1']['field'] = 'field_call_link';
  $handler->display->display_options['fields']['field_call_link_1']['ui_name'] = 'link URL';
  $handler->display->display_options['fields']['field_call_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_call_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_call_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_call_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_call_link_1']['type'] = 'link_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'call-text';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit banner content';
  /* Field: Banner HTML */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Banner HTML';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_call_link_1]"><div class="call-inner-content">[field_teaser_image]<div class="call-text"><div class="call-to-action-title">[field_call_link]</div>[body]</div></div></a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'call-to-action';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'campaign' => 'campaign',
  );
  /* Filter criterion: Content translation: Translation set node ID */
  $handler->display->display_options['filters']['tnid']['id'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['table'] = 'node';
  $handler->display->display_options['filters']['tnid']['field'] = 'tnid';

  /* Display: Call to action banner */
  $handler = $view->new_display('block', 'Call to action banner', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Block display of node 1038';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'campaign' => 'campaign',
  );
  /* Filter criterion: Content translation: Translation set node ID */
  $handler->display->display_options['filters']['tnid']['id'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['table'] = 'node';
  $handler->display->display_options['filters']['tnid']['field'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['value']['value'] = '1039';
  $translatables['single_node_banner_link'] = array(
    t('Master'),
    t('Single node banner link'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Edit banner content'),
    t('<a href="[field_call_link_1]"><div class="call-inner-content">[field_teaser_image]<div class="call-text"><div class="call-to-action-title">[field_call_link]</div>[body]</div></div></a>'),
    t('Call to action banner'),
    t('Block display of node 1038'),
  );
// Add view to list of views to provide.
   $views[$view->name] = $view;
   return $views;
}

<?php
/**
 * @file
 * event_calendar.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function event_calendar_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events_calendar';
  $view->description = 'Lists out events based on date.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'npf-event-calendar';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_npf_event_date' => 'field_npf_event_date',
    'field_npf_event_venue_address' => 'field_npf_event_venue_address',
    'field_npf_event_description' => 'field_npf_event_description',
    'field_npf_event_type' => 'field_npf_event_type',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_npf_event_type']['id'] = 'field_npf_event_type';
  $handler->display->display_options['fields']['field_npf_event_type']['table'] = 'field_data_field_npf_event_type';
  $handler->display->display_options['fields']['field_npf_event_type']['field'] = 'field_npf_event_type';
  $handler->display->display_options['fields']['field_npf_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_npf_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_npf_event_type']['element_default_classes'] = FALSE;
  /* Field: Content: Local? */
  $handler->display->display_options['fields']['field_npf_event_local']['id'] = 'field_npf_event_local';
  $handler->display->display_options['fields']['field_npf_event_local']['table'] = 'field_data_field_npf_event_local';
  $handler->display->display_options['fields']['field_npf_event_local']['field'] = 'field_npf_event_local';
  $handler->display->display_options['fields']['field_npf_event_local']['label'] = '';
  $handler->display->display_options['fields']['field_npf_event_local']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_npf_event_local']['element_type'] = '0';
  $handler->display->display_options['fields']['field_npf_event_local']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_npf_event_local']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_npf_event_local']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_npf_event_local']['field_api_classes'] = TRUE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_npf_event_date']['id'] = 'field_npf_event_date';
  $handler->display->display_options['fields']['field_npf_event_date']['table'] = 'field_data_field_npf_event_date';
  $handler->display->display_options['fields']['field_npf_event_date']['field'] = 'field_npf_event_date';
  $handler->display->display_options['fields']['field_npf_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_npf_event_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_npf_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_npf_event_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_npf_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_npf_event_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_npf_event_date']['field_api_classes'] = TRUE;
  /* Field: Content: Venue Name */
  $handler->display->display_options['fields']['field_npf_event_venue_name']['id'] = 'field_npf_event_venue_name';
  $handler->display->display_options['fields']['field_npf_event_venue_name']['table'] = 'field_data_field_npf_event_venue_name';
  $handler->display->display_options['fields']['field_npf_event_venue_name']['field'] = 'field_npf_event_venue_name';
  $handler->display->display_options['fields']['field_npf_event_venue_name']['label'] = '';
  $handler->display->display_options['fields']['field_npf_event_venue_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_npf_event_venue_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_npf_event_venue_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_npf_event_venue_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_npf_event_venue_name']['field_api_classes'] = TRUE;
  /* Field: Content: Venue Address */
  $handler->display->display_options['fields']['field_npf_event_venue_address']['id'] = 'field_npf_event_venue_address';
  $handler->display->display_options['fields']['field_npf_event_venue_address']['table'] = 'field_data_field_npf_event_venue_address';
  $handler->display->display_options['fields']['field_npf_event_venue_address']['field'] = 'field_npf_event_venue_address';
  $handler->display->display_options['fields']['field_npf_event_venue_address']['label'] = '';
  $handler->display->display_options['fields']['field_npf_event_venue_address']['element_type'] = '0';
  $handler->display->display_options['fields']['field_npf_event_venue_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_npf_event_venue_address']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_npf_event_venue_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_npf_event_venue_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_npf_event_venue_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_npf_event_venue_address']['field_api_classes'] = TRUE;
  /* Field: Content: Event Description */
  $handler->display->display_options['fields']['field_npf_event_description']['id'] = 'field_npf_event_description';
  $handler->display->display_options['fields']['field_npf_event_description']['table'] = 'field_data_field_npf_event_description';
  $handler->display->display_options['fields']['field_npf_event_description']['field'] = 'field_npf_event_description';
  $handler->display->display_options['fields']['field_npf_event_description']['label'] = '';
  $handler->display->display_options['fields']['field_npf_event_description']['element_type'] = '0';
  $handler->display->display_options['fields']['field_npf_event_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_npf_event_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_npf_event_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_npf_event_description']['field_api_classes'] = TRUE;
  /* Field: Content: Venue Map */
  $handler->display->display_options['fields']['field_npf_event_venue_map']['id'] = 'field_npf_event_venue_map';
  $handler->display->display_options['fields']['field_npf_event_venue_map']['table'] = 'field_data_field_npf_event_venue_map';
  $handler->display->display_options['fields']['field_npf_event_venue_map']['field'] = 'field_npf_event_venue_map';
  $handler->display->display_options['fields']['field_npf_event_venue_map']['label'] = '';
  $handler->display->display_options['fields']['field_npf_event_venue_map']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_npf_event_venue_map']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_npf_event_venue_map']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_npf_event_venue_map']['click_sort_column'] = 'lat';
  $handler->display->display_options['fields']['field_npf_event_venue_map']['type'] = 'geolocation_googlemaps_static';
  $handler->display->display_options['fields']['field_npf_event_venue_map']['settings'] = array(
    'map_width' => '250px',
    'map_height' => '175px',
    'marker_icon' => '',
    'map_imageformat' => 'png8',
    'map_link' => 1,
    'map_maptype' => 'roadmap',
    'map_zoomlevel' => '7',
  );
  $handler->display->display_options['fields']['field_npf_event_venue_map']['field_api_classes'] = TRUE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_npf_event_url']['id'] = 'field_npf_event_url';
  $handler->display->display_options['fields']['field_npf_event_url']['table'] = 'field_data_field_npf_event_url';
  $handler->display->display_options['fields']['field_npf_event_url']['field'] = 'field_npf_event_url';
  $handler->display->display_options['fields']['field_npf_event_url']['label'] = '';
  $handler->display->display_options['fields']['field_npf_event_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_npf_event_url']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_npf_event_date) */
  $handler->display->display_options['sorts']['field_npf_event_date_value']['id'] = 'field_npf_event_date_value';
  $handler->display->display_options['sorts']['field_npf_event_date_value']['table'] = 'field_data_field_npf_event_date';
  $handler->display->display_options['sorts']['field_npf_event_date_value']['field'] = 'field_npf_event_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event_calendar_listing' => 'event_calendar_listing',
  );
  $export['events_calendar'] = $view;

  return $export;
}

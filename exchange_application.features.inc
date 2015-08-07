<?php
/**
 * @file
 * exchange_application.features.inc
 */

/**
 * Implements hook_views_api().
 */
function exchange_application_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function exchange_application_node_info() {
  $items = array(
    'best_practice_submission' => array(
      'name' => t('Best Practice Submission'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('What is the title of your presentation?'),
      'help' => '',
    ),
    'exchange_application' => array(
      'name' => t('Your Exchange Application'),
      'base' => 'node_content',
      'description' => t('Add an Exchange Application'),
      'has_title' => '1',
      'title_label' => t('Your Full Name'),
      'help' => t('<h1>Exchange Participation</h1>
Please take this opportunity to let us know about your goals for attending the Exchange and how you would like to share your work on the Exchange agenda – 75% of all sessions at the Exchange are sourced from this application process.'),
    ),
    'program' => array(
      'name' => t('Social Entrepreneurship Program'),
      'base' => 'node_content',
      'description' => t('This is a program happening at an institution.'),
      'has_title' => '1',
      'title_label' => t('Name of Program'),
      'help' => '',
    ),
    'social_entrepreneurship_course' => array(
      'name' => t('Social Entrepreneurship Course'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title of Course'),
      'help' => '',
    ),
    'social_entrepreneurship_partners' => array(
      'name' => t('Social Entrepreneurship Partnerships'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('What is the name of the partnership'),
      'help' => '',
    ),
    'social_entrepreneurship_research' => array(
      'name' => t('Social Entrepreneurship Research'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('What are your areas of research'),
      'help' => '',
    ),
  );
  return $items;
}

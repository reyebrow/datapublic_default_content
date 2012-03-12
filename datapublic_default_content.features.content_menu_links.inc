<?php
/**
 * @file
 * datapublic_default_content.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function datapublic_default_content_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => 'Home',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:node/82
  $menu_links['main-menu:node/82'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/about_page',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => 'About',
      ),
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:node/108
  $menu_links['main-menu:node/108'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/contact_page',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact',
      ),
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:node/43
  $menu_links['main-menu:node/43'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/mediaroom_page',
    'router_path' => 'node/%',
    'link_title' => 'Media Room',
    'options' => array(
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:node/30
  $menu_links['main-menu:node/30'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/resources_page',
    'router_path' => 'node/%',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => 'Resources',
      ),
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-main-menu-mobile-:<front>
  $menu_links['menu-main-menu-mobile-:<front>'] = array(
    'menu_name' => 'menu-main-menu-mobile-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => 'Home',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-main-menu-mobile-:node/82
  $menu_links['menu-main-menu-mobile-:node/82'] = array(
    'menu_name' => 'menu-main-menu-mobile-',
    'link_path' => 'node-name/about_page',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => 'About',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-main-menu-mobile-:node/108
  $menu_links['menu-main-menu-mobile-:node/108'] = array(
    'menu_name' => 'menu-main-menu-mobile-',
    'link_path' => 'node-name/contact_page',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
  );
  // Exported menu link: menu-main-menu-mobile-:node/43
  $menu_links['menu-main-menu-mobile-:node/43'] = array(
    'menu_name' => 'menu-main-menu-mobile-',
    'link_path' => 'node-name/mediaroom_page',
    'router_path' => 'node/%',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Media Room',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-main-menu-mobile-:node/30
  $menu_links['menu-main-menu-mobile-:node/30'] = array(
    'menu_name' => 'menu-main-menu-mobile-',
    'link_path' => 'node-name/resources_page',
    'router_path' => 'node/%',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => 'Resources',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Contact');
  t('Home');
  t('Media');
  t('Media Room');
  t('Resources');


  return $menu_links;
}

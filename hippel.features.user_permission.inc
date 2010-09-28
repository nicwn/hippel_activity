<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function hippel_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer activity
  $permissions['administer activity'] = array(
    'name' => 'administer activity',
    'roles' => array(),
  );

  // Exported permission: delete own activity
  $permissions['delete own activity'] = array(
    'name' => 'delete own activity',
    'roles' => array(),
  );

  // Exported permission: manage own activity settings
  $permissions['manage own activity settings'] = array(
    'name' => 'manage own activity settings',
    'roles' => array(),
  );

  return $permissions;
}

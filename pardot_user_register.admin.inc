<?php

function pardot_user_register_form($form, &$form_state) {
	$form = array();
	$form['pardot_form'] = array(
    	'#type' => 'textfield', 
    	'#title' => t('Pardot End Point'), 
    	'#default_value' => variable_get('pardot_form_uri'),     
    	'#required' => TRUE,
  	);	  
	$form['submit'] = array(
	   	'#type' => 'submit', 
	    '#value' => t('Save Configuration'),
	);
	return $form;    
}

function pardot_user_register_form_submit($form, &$form_state) {
	variable_set('pardot_form_uri', $form['pardot_form']['#value']);
	drupal_set_message(t('Your configuration has been saved.'));
}

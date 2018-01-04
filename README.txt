Pardot User Register
Pardot User Registration module helps users or site builders to integrate Drupal User Registration with Pardot. All that is needed is the setup of Form Handler URL in the defined Drupal administration page.

Prerequisite
1. User Registration fields that are meant to be captured in Pardot has to be created along with Form Handler.
2. Pardot User Register module is downloaded, installed and enabled.

How to configure Pardot Form Handler?
1. Go to admin/config/services/pardot_user_register and add the Form Handler URL to the text box - which is configured in Pardot.
2. Click the button "Save Configuration".

How to test?
Clear Cache and create a test user account using Drupal user registration form. You should be able to see the values in Pardot. If not, check for the errors in Watchdog logs and fix them accordingly.

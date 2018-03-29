#
# Regular cron jobs for the amxa-desktop-extra package
#
0 4	* * *	root	[ -x /usr/bin/amxa-desktop-extra_maintenance ] && /usr/bin/amxa-desktop-extra_maintenance

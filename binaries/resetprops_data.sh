#!/system/bin/sh

/data/local/tmp/resetprop_static ro.boot.verifiedbootstate green
/data/local/tmp/resetprop_static ro.boot.veritymode enforcing
/data/local/tmp/resetprop_static ro.secure 1
/data/local/tmp/resetprop_static ro.boot.enable_dm_verity 1
/data/local/tmp/resetprop_static ro.boot.flash.locked 1
/data/local/tmp/resetprop_static ro.boot.secboot enabled
/data/local/tmp/resetprop_static ro.boot.vbmeta.device_state locked

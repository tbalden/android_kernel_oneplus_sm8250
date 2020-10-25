#!/system/bin/sh


/dev/resetprop_static ro.boot.verifiedbootstate green
/dev/resetprop_static ro.boot.veritymode enforcing
/dev/resetprop_static ro.secure 1
/dev/resetprop_static ro.boot.enable_dm_verity 1
/dev/resetprop_static ro.boot.flash.locked 1
/dev/resetprop_static ro.boot.secboot enabled
/dev/resetprop_static ro.boot.vbmeta.device_state locked
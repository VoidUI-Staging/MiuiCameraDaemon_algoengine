#ifndef __DEVICE_H__
#define __DEVICE_H__


#ifndef ARCSOFT_TYPE_LIST
    #ifndef ARCSOFT_TYPE_LIST_WIDE
        #ifndef ARCSOFT_TYPE_LIST_WIDE_INDEX
            #define ARCSOFT_TYPE_LIST_WIDE_INDEX CameraRoleTypeWide
        #endif

        #ifndef ARCSOFT_TYPE_LIST_WIDE_VALUE
            #define ARCSOFT_TYPE_LIST_WIDE_VALUE ARC_MFSR_CAMERA_TYPE_REAR_WIDE_0
        #endif

        #define ARCSOFT_TYPE_LIST_WIDE [ARCSOFT_TYPE_LIST_WIDE_INDEX] = ARCSOFT_TYPE_LIST_WIDE_VALUE
    #endif

#define ARCSOFT_TYPE_LIST        \
    {                            \
        ARCSOFT_TYPE_LIST_WIDE,  \
    }
#endif

#endif
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libcec
LOCAL_MODULE_TAGS = optional

LOCAL_CPP_EXTENSION := .cpp

LOCAL_SDK_VERSION := 9
LOCAL_NDK_STL_VARIANT := gnustl_static

LOCAL_SRC_FILES := lib/CECProcessor.cpp \
                    lib/LibCEC.cpp \
                    lib/LibCECC.cpp \
                    lib/CECClient.cpp \
                    lib/adapter/AdapterFactory.cpp \
                    lib/devices/CECAudioSystem.cpp \
                    lib/devices/CECBusDevice.cpp \
                    lib/devices/CECDeviceMap.cpp \
                    lib/devices/CECPlaybackDevice.cpp \
                    lib/devices/CECRecordingDevice.cpp \
                    lib/devices/CECTuner.cpp \
                    lib/devices/CECTV.cpp \
                    lib/implementations/ANCommandHandler.cpp \
                    lib/implementations/CECCommandHandler.cpp \
                    lib/implementations/SLCommandHandler.cpp \
                    lib/implementations/VLCommandHandler.cpp \
                    lib/implementations/RLCommandHandler.cpp \
                    lib/implementations/PHCommandHandler.cpp \
                    lib/implementations/RHCommandHandler.cpp \
                    lib/implementations/AQCommandHandler.cpp \
                    lib/adapter/Exynos/ExynosCECAdapterDetection.cpp \
                    lib/adapter/Exynos/ExynosCECAdapterCommunication.cpp \
                    lib/adapter/Pulse-Eight/USBCECAdapterMessage.cpp \
                    lib/adapter/Pulse-Eight/USBCECAdapterCommands.cpp \
                    lib/adapter/Pulse-Eight/USBCECAdapterCommunication.cpp \
                    lib/adapter/Pulse-Eight/USBCECAdapterMessageQueue.cpp \
                    lib/adapter/Pulse-Eight/USBCECAdapterDetection.cpp \
                    lib/platform/posix/serialport.cpp \
                    lib/platform/posix/os-edid.cpp \
                    lib/platform/adl/adl-edid.cpp \
                    lib/platform/nvidia/nv-edid.cpp \
                    lib/util/fstrcmp.c \
                    lib/util/StringUtils.cpp


LOCAL_SHARED_LIBRARIES := libdl liblog

LOCAL_C_INCLUDES := $(LOCAL_PATH)/lib $(LOCAL_PATH)/include
LOCAL_CFLAGS := -std=gnu++11 -O2 -pthread -frtti -fexceptions
LOCAL_CFLAGS += -DHAVE_P8_USB -DHAVE_EXYNOS_API

include $(BUILD_SHARED_LIBRARY)


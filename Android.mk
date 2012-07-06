QCOM_MEDIA_ROOT := $(call my-dir)
ifneq ($(filter msm8960 msm8660 msm7627a msm7630_surf,$(TARGET_BOARD_PLATFORM)),)
include $(QCOM_MEDIA_ROOT)/mm-core/Android.mk
include $(QCOM_MEDIA_ROOT)/libstagefrighthw/Android.mk
include $(QCOM_MEDIA_ROOT)/dashplayer/Android.mk
include $(QCOM_MEDIA_ROOT)/QCMediaPlayer/Android.mk
endif

ifneq ($(filter msm8960 msm8660 msm7630_surf,$(TARGET_BOARD_PLATFORM)),)
include $(QCOM_MEDIA_ROOT)/mm-video/Android.mk
include $(QCOM_MEDIA_ROOT)/libc2dcolorconvert/Android.mk
endif

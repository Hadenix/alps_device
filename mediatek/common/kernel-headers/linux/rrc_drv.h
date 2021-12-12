/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#include <linux/ioctl.h>
#ifndef __RRC_DRV_H__
#define __RRC_DRV_H__
typedef struct {
  unsigned int scenario;
  unsigned int enable;
} RRC_DRV_DATA;
typedef enum {
  RRC_DRV_TYPE_NONE = 0,
  RRC_DRV_TYPE_CAMERA_PREVIEW,
  RRC_DRV_TYPE_CAMERA_ZSD,
  RRC_DRV_TYPE_CAMERA_CAPTURE,
  RRC_DRV_TYPE_CAMERA_ICFP,
  RRC_DRV_TYPE_VIDEO_NORMAL,
  RRC_DRV_TYPE_VIDEO_SWDEC_PLAYBACK,
  RRC_DRV_TYPE_VIDEO_PLAYBACK,
  RRC_DRV_TYPE_VIDEO_TELEPHONY,
  RRC_DRV_TYPE_VIDEO_RECORD,
  RRC_DRV_TYPE_VIDEO_RECORD_CAMERA,
  RRC_DRV_TYPE_VIDEO_RECORD_SLOWMOTION,
  RRC_DRV_TYPE_VIDEO_SNAPSHOT,
  RRC_DRV_TYPE_VIDEO_LIVE_PHOTO,
  RRC_DRV_TYPE_VIDEO_WIFI_DISPLAY,
  RRC_DRV_TYPE_TOUCH_EVENT,
  RRC_DRV_TYPE_MAX_SIZE
} RRC_DRV_SCENARIO_TYPE;
typedef enum {
  RRC_DRV_NONE = 0,
  RRC_DRV_60Hz,
  RRC_DRV_120Hz
} RRC_DRV_REFRESH_RATE;
#define RRC_IOCTL_MAGIC 'x'
#define RRC_IOCTL_CMD_INIT _IO(RRC_IOCTL_MAGIC, 11)
#define RRC_IOCTL_CMD_SET_SCENARIO_TYPE _IOWR(RRC_IOCTL_MAGIC, 12, RRC_DRV_DATA)
#define RRC_IOCTL_CMD_DEINIT _IO(RRC_IOCTL_MAGIC, 13)
#endif

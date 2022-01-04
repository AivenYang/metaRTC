/*
 * YangCRtcSession.h
 *
 *  Created on: 2022年1月4日
 *      Author: yang
 */

#ifndef SRC_YANGWEBRTC_YANGCRTCSESSION_H_
#define SRC_YANGWEBRTC_YANGCRTCSESSION_H_


void yang_init_rtcsession_context(YangRtcSession* session,void* user);
void yang_init_rtcsession(YangRtcSession* session,YangStreamOptType role);
void yang_destroy_rtcsession(YangRtcSession* session);

void yang_rtcsession_setStun(YangRtcSession* session,char* data,int32_t nb);
void yang_rtcsession_startudp(YangRtcSession* session,int32_t localport);

void yang_rtcsession_disconnect(YangRtcSession* session);
void yang_rtcsession_setSsrc(YangRtcSession* session,uint32_t audioSsrc,uint32_t videoSsrc);
void yang_rtcsession_startStunTimer(YangRtcSession* session);
void yang_rtcsession_startTimers(YangRtcSession* session) ;
void yang_rtcsession_receive(YangRtcSession* session,char *data, int32_t size);
int32_t yang_rtcsession_publishVideo(YangRtcSession* session,YangFrame* p);
int32_t yang_rtcsession_publishAudio(YangRtcSession* session,YangFrame *p);



#endif /* SRC_YANGWEBRTC_YANGCRTCSESSION_H_ */
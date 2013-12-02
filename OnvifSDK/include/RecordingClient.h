#ifndef RECORDINGCLIENT_H
#define RECORDINGCLIENT_H

#include "sigrlog.h"
#include "OnvifSDK.h"
#include "WebRecordingBindingProxy.h"

class RecordingClient
{
public:
    RecordingClient(const char * pchAdress, soap * s);
    ~RecordingClient();

    virtual int CreateRecording (RecCreateRecording &, RecCreateRecordingResponse &);
    virtual int CreateRecordingJob (RecCreateRecordingJob &, RecCreateRecordingJobResponse &);
    virtual int DeleteRecording (const std::string &);
    virtual int DeleteRecordingJob (const std::string &);

private:
    RecordingBindingProxy m_proxy;
};
#endif	// RECORDINGCLIENT_H

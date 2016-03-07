// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 4.6.0 by WSRD Tencent.
// Generated from `StatF.jce'
// **********************************************************************

#ifndef __STATF_H_
#define __STATF_H_

#include <map>
#include <string>
#include <vector>
#include "jce/Jce.h"
using namespace std;
#include "servant/ServantProxy.h"
#include "servant/Servant.h"


namespace taf
{
    struct StatMicMsgHead : public taf::JceStructBase
    {
    public:
        static string className()
        {
            return "taf.StatMicMsgHead";
        }
        static string MD5()
        {
            return "35c0f4a3976d1db18b564035c7a98a0b";
        }
        StatMicMsgHead()
        :masterName(""),slaveName(""),interfaceName(""),masterIp(""),slaveIp(""),slavePort(0),returnValue(0)
        {
        }
        template<typename WriterT>
        void writeTo(taf::JceOutputStream<WriterT>& _os) const
        {
            _os.write(masterName, 0);
            _os.write(slaveName, 1);
            _os.write(interfaceName, 2);
            _os.write(masterIp, 3);
            _os.write(slaveIp, 4);
            _os.write(slavePort, 5);
            _os.write(returnValue, 6);
        }
        template<typename ReaderT>
        void readFrom(taf::JceInputStream<ReaderT>& _is)
        {
            _is.read(masterName, 0, true);
            _is.read(slaveName, 1, true);
            _is.read(interfaceName, 2, true);
            _is.read(masterIp, 3, true);
            _is.read(slaveIp, 4, true);
            _is.read(slavePort, 5, true);
            _is.read(returnValue, 6, true);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.display(masterName,"masterName");
            _ds.display(slaveName,"slaveName");
            _ds.display(interfaceName,"interfaceName");
            _ds.display(masterIp,"masterIp");
            _ds.display(slaveIp,"slaveIp");
            _ds.display(slavePort,"slavePort");
            _ds.display(returnValue,"returnValue");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.displaySimple(masterName, true);
            _ds.displaySimple(slaveName, true);
            _ds.displaySimple(interfaceName, true);
            _ds.displaySimple(masterIp, true);
            _ds.displaySimple(slaveIp, true);
            _ds.displaySimple(slavePort, true);
            _ds.displaySimple(returnValue, false);
            return _os;
        }
    public:
        std::string masterName;
        std::string slaveName;
        std::string interfaceName;
        std::string masterIp;
        std::string slaveIp;
        taf::Int32 slavePort;
        taf::Int32 returnValue;
    };
    inline bool operator==(const StatMicMsgHead&l, const StatMicMsgHead&r)
    {
        return l.masterName == r.masterName && l.slaveName == r.slaveName && l.interfaceName == r.interfaceName && l.masterIp == r.masterIp && l.slaveIp == r.slaveIp && l.slavePort == r.slavePort && l.returnValue == r.returnValue;
    }
    inline bool operator!=(const StatMicMsgHead&l, const StatMicMsgHead&r)
    {
        return !(l == r);
    }
    inline bool operator<(const StatMicMsgHead&l, const StatMicMsgHead&r)
    {
        if(l.masterName != r.masterName)  return (l.masterName < r.masterName);
        if(l.slaveName != r.slaveName)  return (l.slaveName < r.slaveName);
        if(l.interfaceName != r.interfaceName)  return (l.interfaceName < r.interfaceName);
        if(l.masterIp != r.masterIp)  return (l.masterIp < r.masterIp);
        if(l.slaveIp != r.slaveIp)  return (l.slaveIp < r.slaveIp);
        if(l.slavePort != r.slavePort)  return (l.slavePort < r.slavePort);
        if(l.returnValue != r.returnValue)  return (l.returnValue < r.returnValue);
        return false;
    }
    inline bool operator<=(const StatMicMsgHead&l, const StatMicMsgHead&r)
    {
        return !(r < l);
    }
    inline bool operator>(const StatMicMsgHead&l, const StatMicMsgHead&r)
    {
        return r < l;
    }
    inline bool operator>=(const StatMicMsgHead&l, const StatMicMsgHead&r)
    {
        return !(l < r);
    }

    struct StatMicMsgBody : public taf::JceStructBase
    {
    public:
        static string className()
        {
            return "taf.StatMicMsgBody";
        }
        static string MD5()
        {
            return "c97f7f383a8a31864beb53807c2cc079";
        }
        StatMicMsgBody()
        :count(0),timeoutCount(0),execCount(0),totalRspTime(0),maxRspTime(0),minRspTime(0)
        {
        }
        template<typename WriterT>
        void writeTo(taf::JceOutputStream<WriterT>& _os) const
        {
            _os.write(count, 0);
            _os.write(timeoutCount, 1);
            _os.write(execCount, 2);
            _os.write(intervalCount, 3);
            _os.write(totalRspTime, 4);
            _os.write(maxRspTime, 5);
            _os.write(minRspTime, 6);
        }
        template<typename ReaderT>
        void readFrom(taf::JceInputStream<ReaderT>& _is)
        {
            _is.read(count, 0, true);
            _is.read(timeoutCount, 1, true);
            _is.read(execCount, 2, true);
            _is.read(intervalCount, 3, true);
            _is.read(totalRspTime, 4, true);
            _is.read(maxRspTime, 5, true);
            _is.read(minRspTime, 6, true);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.display(count,"count");
            _ds.display(timeoutCount,"timeoutCount");
            _ds.display(execCount,"execCount");
            _ds.display(intervalCount,"intervalCount");
            _ds.display(totalRspTime,"totalRspTime");
            _ds.display(maxRspTime,"maxRspTime");
            _ds.display(minRspTime,"minRspTime");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.displaySimple(count, true);
            _ds.displaySimple(timeoutCount, true);
            _ds.displaySimple(execCount, true);
            _ds.displaySimple(intervalCount, true);
            _ds.displaySimple(totalRspTime, true);
            _ds.displaySimple(maxRspTime, true);
            _ds.displaySimple(minRspTime, false);
            return _os;
        }
    public:
        taf::Int32 count;
        taf::Int32 timeoutCount;
        taf::Int32 execCount;
        map<taf::Int32, taf::Int32> intervalCount;
        taf::Int64 totalRspTime;
        taf::Int32 maxRspTime;
        taf::Int32 minRspTime;
    };
    inline bool operator==(const StatMicMsgBody&l, const StatMicMsgBody&r)
    {
        return l.count == r.count && l.timeoutCount == r.timeoutCount && l.execCount == r.execCount && l.intervalCount == r.intervalCount && l.totalRspTime == r.totalRspTime && l.maxRspTime == r.maxRspTime && l.minRspTime == r.minRspTime;
    }
    inline bool operator!=(const StatMicMsgBody&l, const StatMicMsgBody&r)
    {
        return !(l == r);
    }

    struct StatSampleMsg : public taf::JceStructBase
    {
    public:
        static string className()
        {
            return "taf.StatSampleMsg";
        }
        static string MD5()
        {
            return "6efbf75cbea7aaef8f94c2f902f62e47";
        }
        StatSampleMsg()
        :unid(""),masterName(""),slaveName(""),interfaceName(""),masterIp(""),slaveIp(""),depth(0),width(0),parentWidth(0)
        {
        }
        template<typename WriterT>
        void writeTo(taf::JceOutputStream<WriterT>& _os) const
        {
            _os.write(unid, 0);
            _os.write(masterName, 1);
            _os.write(slaveName, 2);
            _os.write(interfaceName, 3);
            _os.write(masterIp, 4);
            _os.write(slaveIp, 5);
            _os.write(depth, 6);
            _os.write(width, 7);
            _os.write(parentWidth, 8);
        }
        template<typename ReaderT>
        void readFrom(taf::JceInputStream<ReaderT>& _is)
        {
            _is.read(unid, 0, true);
            _is.read(masterName, 1, true);
            _is.read(slaveName, 2, true);
            _is.read(interfaceName, 3, true);
            _is.read(masterIp, 4, true);
            _is.read(slaveIp, 5, true);
            _is.read(depth, 6, true);
            _is.read(width, 7, true);
            _is.read(parentWidth, 8, true);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.display(unid,"unid");
            _ds.display(masterName,"masterName");
            _ds.display(slaveName,"slaveName");
            _ds.display(interfaceName,"interfaceName");
            _ds.display(masterIp,"masterIp");
            _ds.display(slaveIp,"slaveIp");
            _ds.display(depth,"depth");
            _ds.display(width,"width");
            _ds.display(parentWidth,"parentWidth");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.displaySimple(unid, true);
            _ds.displaySimple(masterName, true);
            _ds.displaySimple(slaveName, true);
            _ds.displaySimple(interfaceName, true);
            _ds.displaySimple(masterIp, true);
            _ds.displaySimple(slaveIp, true);
            _ds.displaySimple(depth, true);
            _ds.displaySimple(width, true);
            _ds.displaySimple(parentWidth, false);
            return _os;
        }
    public:
        std::string unid;
        std::string masterName;
        std::string slaveName;
        std::string interfaceName;
        std::string masterIp;
        std::string slaveIp;
        taf::Int32 depth;
        taf::Int32 width;
        taf::Int32 parentWidth;
    };
    inline bool operator==(const StatSampleMsg&l, const StatSampleMsg&r)
    {
        return l.unid == r.unid && l.masterName == r.masterName && l.slaveName == r.slaveName && l.interfaceName == r.interfaceName && l.masterIp == r.masterIp && l.slaveIp == r.slaveIp && l.depth == r.depth && l.width == r.width && l.parentWidth == r.parentWidth;
    }
    inline bool operator!=(const StatSampleMsg&l, const StatSampleMsg&r)
    {
        return !(l == r);
    }


    /* callback of async proxy for client */
    class StatFPrxCallback: public taf::ServantProxyCallback
    {
    public:
        virtual ~StatFPrxCallback(){}
        virtual void callback_reportMicMsg(taf::Int32 ret)
        { throw std::runtime_error("callback_reportMicMsg() overloading incorrect."); }
        virtual void callback_reportMicMsg_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_reportMicMsg_exception() overloading incorrect."); }

        virtual void callback_reportSampleMsg(taf::Int32 ret)
        { throw std::runtime_error("callback_reportSampleMsg() overloading incorrect."); }
        virtual void callback_reportSampleMsg_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_reportSampleMsg_exception() overloading incorrect."); }

    public:
        int onDispatch(taf::ReqMessagePtr msg);
    };
    typedef taf::TC_AutoPtr<StatFPrxCallback> StatFPrxCallbackPtr;

    /* proxy for client */
    class StatFProxy : public taf::ServantProxy
    {
    public:
        typedef map<string, string> TAF_CONTEXT;
        taf::Int32 reportMicMsg(const map<taf::StatMicMsgHead, taf::StatMicMsgBody> & msg,taf::Bool bFromClient,const map<string, string> &context = TAF_CONTEXT());
        void async_reportMicMsg(StatFPrxCallbackPtr callback,const map<taf::StatMicMsgHead, taf::StatMicMsgBody> & msg,taf::Bool bFromClient,const map<string, string> &context = TAF_CONTEXT());

        taf::Int32 reportSampleMsg(const vector<taf::StatSampleMsg> & msg,const map<string, string> &context = TAF_CONTEXT());
        void async_reportSampleMsg(StatFPrxCallbackPtr callback,const vector<taf::StatSampleMsg> & msg,const map<string, string> &context = TAF_CONTEXT());

        StatFProxy* taf_hash(int64_t key);
    };
    typedef taf::TC_AutoPtr<StatFProxy> StatFPrx;

    /* servant for server */
    class StatF : public taf::Servant
    {
    public:
        virtual ~StatF(){}
        virtual taf::Int32 reportMicMsg(const map<taf::StatMicMsgHead, taf::StatMicMsgBody> & msg,taf::Bool bFromClient,taf::JceCurrentPtr current) = 0;
        static void async_response_reportMicMsg(taf::JceCurrentPtr current, taf::Int32 _ret);

        virtual taf::Int32 reportSampleMsg(const vector<taf::StatSampleMsg> & msg,taf::JceCurrentPtr current) = 0;
        static void async_response_reportSampleMsg(taf::JceCurrentPtr current, taf::Int32 _ret);

    public:
        int onDispatch(taf::JceCurrentPtr _current, vector<char> &_sResponseBuffer);
    };


}

#define taf_StatMicMsgHead_JCE_COPY_STRUCT_HELPER   \
        jce_copy_struct(a.masterName,b.masterName);jce_copy_struct(a.slaveName,b.slaveName);jce_copy_struct(a.interfaceName,b.interfaceName);jce_copy_struct(a.masterIp,b.masterIp);jce_copy_struct(a.slaveIp,b.slaveIp);jce_copy_struct(a.slavePort,b.slavePort);jce_copy_struct(a.returnValue,b.returnValue);

#define taf_StatMicMsgBody_JCE_COPY_STRUCT_HELPER   \
        jce_copy_struct(a.count,b.count);jce_copy_struct(a.timeoutCount,b.timeoutCount);jce_copy_struct(a.execCount,b.execCount);jce_copy_struct(a.intervalCount,b.intervalCount);jce_copy_struct(a.totalRspTime,b.totalRspTime);jce_copy_struct(a.maxRspTime,b.maxRspTime);jce_copy_struct(a.minRspTime,b.minRspTime);

#define taf_StatSampleMsg_JCE_COPY_STRUCT_HELPER   \
        jce_copy_struct(a.unid,b.unid);jce_copy_struct(a.masterName,b.masterName);jce_copy_struct(a.slaveName,b.slaveName);jce_copy_struct(a.interfaceName,b.interfaceName);jce_copy_struct(a.masterIp,b.masterIp);jce_copy_struct(a.slaveIp,b.slaveIp);jce_copy_struct(a.depth,b.depth);jce_copy_struct(a.width,b.width);jce_copy_struct(a.parentWidth,b.parentWidth);



#endif
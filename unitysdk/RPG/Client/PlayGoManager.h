#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOPAPLJPPCB;
class BOFJHGFAJBN;
class DODJIGDAJFE;
class ENHCOHMNNOD;
class FKEPGDPBEHH;
class HPIFMHPHMGB;
namespace RPG::Client { class VersionUpdateProgressInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PLAYGOMANAGER_ADDEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1E2A4900)
#define RPG_CLIENT_PLAYGOMANAGER_CHECKALLCHUNKDOWNLOADCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E2A4D50)
#define RPG_CLIENT_PLAYGOMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A4690)
#define RPG_CLIENT_PLAYGOMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E2A4AE0)
#define RPG_CLIENT_PLAYGOMANAGER_GETESTIMATEDTIME_OFFSET UNITYSDK_OFFSET(0x1E2A4E90)
#define RPG_CLIENT_PLAYGOMANAGER_GETUSEDTIME_OFFSET UNITYSDK_OFFSET(0x1E2A4FE0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTCOSTTIME_OFFSET UNITYSDK_OFFSET(0x1E2A65E0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTPROGRESSSIZE_OFFSET UNITYSDK_OFFSET(0x1E2A65A0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTTOTALSIZE_OFFSET UNITYSDK_OFFSET(0x1E2A65C0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_ISFINISHDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1E2A64A0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_ISRECORDSTARTEVENT_OFFSET UNITYSDK_OFFSET(0x1E2A64E0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_ISSENDSTARTEVENT_OFFSET UNITYSDK_OFFSET(0x1E2A6500)
#define RPG_CLIENT_PLAYGOMANAGER_GET_PERCENT_OFFSET UNITYSDK_OFFSET(0x1E2A64C0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_STARTCOSTTIME_OFFSET UNITYSDK_OFFSET(0x1E2A6580)
#define RPG_CLIENT_PLAYGOMANAGER_GET_STARTPERCENT_OFFSET UNITYSDK_OFFSET(0x1E2A6520)
#define RPG_CLIENT_PLAYGOMANAGER_GET_STARTPROGRESSSIZE_OFFSET UNITYSDK_OFFSET(0x1E2A6540)
#define RPG_CLIENT_PLAYGOMANAGER_GET_STARTTOTALSIZE_OFFSET UNITYSDK_OFFSET(0x1E2A6560)
#define RPG_CLIENT_PLAYGOMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1E2A4700)
#define RPG_CLIENT_PLAYGOMANAGER_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1E2A6380)
#define RPG_CLIENT_PLAYGOMANAGER_ONPROGRESS_OFFSET UNITYSDK_OFFSET(0x1E2A5420)
#define RPG_CLIENT_PLAYGOMANAGER_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E2A5360)
#define RPG_CLIENT_PLAYGOMANAGER_ONTICK_OFFSET UNITYSDK_OFFSET(0x1E2A4C20)
#define RPG_CLIENT_PLAYGOMANAGER_REMOVEEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1E2A5200)
#define RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTCOSTTIME_OFFSET UNITYSDK_OFFSET(0x1E2A65F0)
#define RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTPROGRESSSIZE_OFFSET UNITYSDK_OFFSET(0x1E2A65B0)
#define RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTTOTALSIZE_OFFSET UNITYSDK_OFFSET(0x1E2A65D0)
#define RPG_CLIENT_PLAYGOMANAGER_SET_ISFINISHDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1E2A64B0)
#define RPG_CLIENT_PLAYGOMANAGER_SET_ISRECORDSTARTEVENT_OFFSET UNITYSDK_OFFSET(0x1E2A64F0)
#define RPG_CLIENT_PLAYGOMANAGER_SET_ISSENDSTARTEVENT_OFFSET UNITYSDK_OFFSET(0x1E2A6510)
#define RPG_CLIENT_PLAYGOMANAGER_SET_PERCENT_OFFSET UNITYSDK_OFFSET(0x1E2A64D0)
#define RPG_CLIENT_PLAYGOMANAGER_SET_STARTCOSTTIME_OFFSET UNITYSDK_OFFSET(0x1E2A6590)
#define RPG_CLIENT_PLAYGOMANAGER_SET_STARTPERCENT_OFFSET UNITYSDK_OFFSET(0x1E2A6530)
#define RPG_CLIENT_PLAYGOMANAGER_SET_STARTPROGRESSSIZE_OFFSET UNITYSDK_OFFSET(0x1E2A6550)
#define RPG_CLIENT_PLAYGOMANAGER_SET_STARTTOTALSIZE_OFFSET UNITYSDK_OFFSET(0x1E2A6570)
#define RPG_CLIENT_PLAYGOMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1E2A4A60)
#define RPG_CLIENT_PLAYGOMANAGER_TRYSENDPLAYGOPOPWINDOWREPORT_OFFSET UNITYSDK_OFFSET(0x1E2A6160)
#define RPG_CLIENT_PLAYGOMANAGER_TRYSENDPLAYGOSTARTREPORT_OFFSET UNITYSDK_OFFSET(0x1E2A5E60)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayGoManager_TypeDefinitionIndex = 70249;

	class PlayGoManager : public ::System::Object
	{
	public:
		::RPG::Client::VersionUpdateProgressInfo* _ProgressInfo; // 0x10
		::AOPAPLJPPCB* _PlayGoImpl; // 0x18
		::System::Int64 _StartProgressSize_k__BackingField; // 0x20
		::System::Int64 _StartCostTime_k__BackingField; // 0x28
		::System::Single lastTime; // 0x30
		::System::Boolean _IsFinishDownload_k__BackingField; // 0x34
		::System::Boolean _IsSendStartEvent_k__BackingField; // 0x35
		::System::Boolean _IsRecordStartEvent_k__BackingField; // 0x36
		::System::Byte _padding0[0x1];
		::System::Int64 _StartTotalSize_k__BackingField; // 0x38
		::System::Int64 _CurrentProgressSize_k__BackingField; // 0x40
		::System::Int64 lastSize; // 0x48
		::System::Int64 _CurrentCostTime_k__BackingField; // 0x50
		::System::Single _Percent_k__BackingField; // 0x58
		::System::Single _StartPercent_k__BackingField; // 0x5C
		::System::Int64 _CurrentTotalSize_k__BackingField; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_INIT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Start()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_START_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_ONTICK_OFFSET))(this);
		}

		::System::Void CheckAllChunkDownloadComplete(::System::Action_1<::BOFJHGFAJBN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::BOFJHGFAJBN*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_CHECKALLCHUNKDOWNLOADCOMPLETE_OFFSET))(this, a1);
		}

		::System::Void GetEstimatedTime(::System::Action_1<::FKEPGDPBEHH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::FKEPGDPBEHH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GETESTIMATEDTIME_OFFSET))(this, a1);
		}

		::System::UInt64 GetUsedTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GETUSEDTIME_OFFSET))(this);
		}

		::System::Void AddEventListener(::System::Action_1<::DODJIGDAJFE*>* a1, ::System::Action_1<::HPIFMHPHMGB*>* a2, ::System::Action_1<::ENHCOHMNNOD*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::DODJIGDAJFE*>*, ::System::Action_1<::HPIFMHPHMGB*>*, ::System::Action_1<::ENHCOHMNNOD*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_ADDEVENTLISTENER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveEventListener(::System::Action_1<::DODJIGDAJFE*>* a1, ::System::Action_1<::HPIFMHPHMGB*>* a2, ::System::Action_1<::ENHCOHMNNOD*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::DODJIGDAJFE*>*, ::System::Action_1<::HPIFMHPHMGB*>*, ::System::Action_1<::ENHCOHMNNOD*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_REMOVEEVENTLISTENER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStart(::DODJIGDAJFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DODJIGDAJFE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_ONSTART_OFFSET))(this, a1);
		}

		::System::Void OnProgress(::HPIFMHPHMGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPIFMHPHMGB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_ONPROGRESS_OFFSET))(this, a1);
		}

		::System::Void TrySendPlayGoStartReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_TRYSENDPLAYGOSTARTREPORT_OFFSET))(this);
		}

		::System::Void TrySendPlayGoPopWindowReport(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_TRYSENDPLAYGOPOPWINDOWREPORT_OFFSET))(this, a1);
		}

		::System::Void OnFinish(::ENHCOHMNNOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENHCOHMNNOD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_ONFINISH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinishDownload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_ISFINISHDOWNLOAD_OFFSET))(this);
		}

		::System::Void set_IsFinishDownload(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_ISFINISHDOWNLOAD_OFFSET))(this, a1);
		}

		::System::Single get_Percent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_PERCENT_OFFSET))(this);
		}

		::System::Void set_Percent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_PERCENT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRecordStartEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_ISRECORDSTARTEVENT_OFFSET))(this);
		}

		::System::Void set_IsRecordStartEvent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_ISRECORDSTARTEVENT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSendStartEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_ISSENDSTARTEVENT_OFFSET))(this);
		}

		::System::Void set_IsSendStartEvent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_ISSENDSTARTEVENT_OFFSET))(this, a1);
		}

		::System::Single get_StartPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_STARTPERCENT_OFFSET))(this);
		}

		::System::Void set_StartPercent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_STARTPERCENT_OFFSET))(this, a1);
		}

		::System::Int64 get_StartProgressSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_STARTPROGRESSSIZE_OFFSET))(this);
		}

		::System::Void set_StartProgressSize(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_STARTPROGRESSSIZE_OFFSET))(this, a1);
		}

		::System::Int64 get_StartTotalSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_STARTTOTALSIZE_OFFSET))(this);
		}

		::System::Void set_StartTotalSize(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_STARTTOTALSIZE_OFFSET))(this, a1);
		}

		::System::Int64 get_StartCostTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_STARTCOSTTIME_OFFSET))(this);
		}

		::System::Void set_StartCostTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_STARTCOSTTIME_OFFSET))(this, a1);
		}

		::System::Int64 get_CurrentProgressSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTPROGRESSSIZE_OFFSET))(this);
		}

		::System::Void set_CurrentProgressSize(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTPROGRESSSIZE_OFFSET))(this, a1);
		}

		::System::Int64 get_CurrentTotalSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTTOTALSIZE_OFFSET))(this);
		}

		::System::Void set_CurrentTotalSize(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTTOTALSIZE_OFFSET))(this, a1);
		}

		::System::Int64 get_CurrentCostTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTCOSTTIME_OFFSET))(this);
		}

		::System::Void set_CurrentCostTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTCOSTTIME_OFFSET))(this, a1);
		}

	};
}

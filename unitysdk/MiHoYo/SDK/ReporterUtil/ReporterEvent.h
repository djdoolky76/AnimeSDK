#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
namespace MiHoYo::SDK::ReporterUtil { class AutoReportHandler; }
namespace MiHoYo::SDK::ReporterUtil { class DataFulledHandler; }
namespace MiHoYo::SDK::ReporterUtil { class ReporterDataItem; }
namespace MiHoYo::SDK::ReporterUtil { class ReporterDataSequence; }
namespace MiHoYo::SDK::ReporterUtil { class ReporterEvent_ReporterEventSettings; }
namespace MiHoYo::SDK::ReporterUtil { class ReporterTimer; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Timers { class ElapsedEventArgs; }

#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ADD_AUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1DD0A220)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ADD_DATAFULLED_OFFSET UNITYSDK_OFFSET(0x1DD0A280)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_BEGINAUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1DD0D4F0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_BEGIN_OFFSET UNITYSDK_OFFSET(0x1DD0AED0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_CLEARDATASAFTERAUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1DD0DBD0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_CREATEDATASEQUENCE_OFFSET UNITYSDK_OFFSET(0x1DD0D100)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0A1C0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_DATASEQUENCE_FULLED_OFFSET UNITYSDK_OFFSET(0x1DD0D3C0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_DURATIONBETWEENCURRENTITEMS_OFFSET UNITYSDK_OFFSET(0x1DD0D200)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DD0D070)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1DD0D090)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1DD0D0B0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_TOTALMILLISECONDSFORALLSTAGES_OFFSET UNITYSDK_OFFSET(0x1DD0B8D0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_NEWSESSION_OFFSET UNITYSDK_OFFSET(0x1DD0D0E0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ONREPORTTIMER_OFFSET UNITYSDK_OFFSET(0x1DD0DA20)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REMOVE_AUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1DD0D960)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REMOVE_DATAFULLED_OFFSET UNITYSDK_OFFSET(0x1DD0D9C0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_RESETDATA_OFFSET UNITYSDK_OFFSET(0x1DD0AB20)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1DD0D080)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1DD0D0A0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1DD0D0C0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STAGENAMES_OFFSET UNITYSDK_OFFSET(0x1DD0DD80)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STAGE_OFFSET UNITYSDK_OFFSET(0x1DD0AF30)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STOPAUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1DD0D6B0)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterEvent_TypeDefinitionIndex = 47680;

	class ReporterEvent : public ::System::Object
	{
	public:
		::MiHoYo::SDK::ReporterUtil::AutoReportHandler* onAutoReport; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*>* datas; // 0x18
		::MiHoYo::SDK::ReporterUtil::ReporterEvent_ReporterEventSettings* _Settings_k__BackingField; // 0x20
		::MiHoYo::SDK::ReporterUtil::DataFulledHandler* onDataFulled; // 0x28
		::System::String* _Name_k__BackingField; // 0x30
		::MiHoYo::SDK::ReporterUtil::ReporterTimer* reportTimer; // 0x38
		::System::UInt32 _SessionId_k__BackingField; // 0x40
		static ::System::UInt32* StaticGet_sharedSessionId()
		{
			return (::System::UInt32*)UnitySDK::FromName("MiHoYo.SDK.ReporterUtil", "ReporterEvent")->GetStaticField(0x8780);
		}

		// static const ::System::String* DefaultStageName; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_NAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_SessionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_SESSIONID_OFFSET))(this);
		}

		::System::Void set_SessionId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_SESSIONID_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterEvent_ReporterEventSettings* get_Settings()
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterEvent_ReporterEventSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_SETTINGS_OFFSET))(this);
		}

		::System::Void set_Settings(::MiHoYo::SDK::ReporterUtil::ReporterEvent_ReporterEventSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent_ReporterEventSettings*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_SETTINGS_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* Begin(::System::String* a1, ::System::Nullable_1<::System::DateTime> a2)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::System::String*, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_BEGIN_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataSequence* Stage(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STAGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int64 get_TotalMillisecondsForAllStages()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_TOTALMILLISECONDSFORALLSTAGES_OFFSET))(this);
		}

		::System::Int64 DurationBetweenCurrentItems(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_DURATIONBETWEENCURRENTITEMS_OFFSET))(this, a1, a2);
		}

		::System::Void NewSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_NEWSESSION_OFFSET))(this);
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_RESETDATA_OFFSET))(this);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataSequence* CreateDataSequence(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_CREATEDATASEQUENCE_OFFSET))(this, a1, a2);
		}

		::System::Void DataSequence_Fulled(::MiHoYo::SDK::ReporterUtil::ReporterDataSequence* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_DATASEQUENCE_FULLED_OFFSET))(this, a1);
		}

		::System::Void BeginAutoReport(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_BEGINAUTOREPORT_OFFSET))(this, a1);
		}

		::System::Void StopAutoReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STOPAUTOREPORT_OFFSET))(this);
		}

		::System::Void add_AutoReport(::MiHoYo::SDK::ReporterUtil::AutoReportHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::AutoReportHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ADD_AUTOREPORT_OFFSET))(this, a1);
		}

		::System::Void remove_AutoReport(::MiHoYo::SDK::ReporterUtil::AutoReportHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::AutoReportHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REMOVE_AUTOREPORT_OFFSET))(this, a1);
		}

		::System::Void add_DataFulled(::MiHoYo::SDK::ReporterUtil::DataFulledHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::DataFulledHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ADD_DATAFULLED_OFFSET))(this, a1);
		}

		::System::Void remove_DataFulled(::MiHoYo::SDK::ReporterUtil::DataFulledHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::DataFulledHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REMOVE_DATAFULLED_OFFSET))(this, a1);
		}

		::System::Void OnReportTimer(::System::Object* a1, ::System::Timers::ElapsedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Timers::ElapsedEventArgs*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ONREPORTTIMER_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::String*>* StageNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STAGENAMES_OFFSET))(this);
		}

		::System::Void ClearDatasAfterAutoReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_CLEARDATASAFTERAUTOREPORT_OFFSET))(this);
		}

	};
}

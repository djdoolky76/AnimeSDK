#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPGECKIMDKM.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/ScheduleData_ScheduleDataUniqueKey.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SCHEDULEDATA_APPENDCANDIDATE_OFFSET UNITYSDK_OFFSET(0x1C0922A0)
#define RPG_CLIENT_SCHEDULEDATA_BETWEEN_OFFSET UNITYSDK_OFFSET(0x1C091FE0)
#define RPG_CLIENT_SCHEDULEDATA_CANDIDATECOMPARISON_OFFSET UNITYSDK_OFFSET(0x1C092760)
#define RPG_CLIENT_SCHEDULEDATA_CONTAINSSCHEDULEDATACANDIDATE_OFFSET UNITYSDK_OFFSET(0x1C092040)
#define RPG_CLIENT_SCHEDULEDATA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C091090)
#define RPG_CLIENT_SCHEDULEDATA_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C091570)
#define RPG_CLIENT_SCHEDULEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C091080)
#define RPG_CLIENT_SCHEDULEDATA_GETSCHEDULEDATACANDIDATE_OFFSET UNITYSDK_OFFSET(0x1C092140)
#define RPG_CLIENT_SCHEDULEDATA_GETWEEKCOUNT_OFFSET UNITYSDK_OFFSET(0x1C091790)
#define RPG_CLIENT_SCHEDULEDATA_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1C091D10)
#define RPG_CLIENT_SCHEDULEDATA_GET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0x1C091390)
#define RPG_CLIENT_SCHEDULEDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C0912F0)
#define RPG_CLIENT_SCHEDULEDATA_GET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0x1C0914D0)
#define RPG_CLIENT_SCHEDULEDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C091430)
#define RPG_CLIENT_SCHEDULEDATA_GET_MODULEID_OFFSET UNITYSDK_OFFSET(0x1C091CF0)
#define RPG_CLIENT_SCHEDULEDATA_GET_UNIQUEKEY_OFFSET UNITYSDK_OFFSET(0x1C091F50)
#define RPG_CLIENT_SCHEDULEDATA_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1C091F00)
#define RPG_CLIENT_SCHEDULEDATA_SET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0x1C0913E0)
#define RPG_CLIENT_SCHEDULEDATA_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C091340)
#define RPG_CLIENT_SCHEDULEDATA_SET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0x1C091520)
#define RPG_CLIENT_SCHEDULEDATA_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C091480)
#define RPG_CLIENT_SCHEDULEDATA_SET_MODULEID_OFFSET UNITYSDK_OFFSET(0x1C091D00)
#define RPG_CLIENT_SCHEDULEDATA__FILLDATAWITHCANDIDATE_OFFSET UNITYSDK_OFFSET(0x1C0925A0)
#define RPG_CLIENT_SCHEDULEDATA__GETAVAILABLECANDIDATE_OFFSET UNITYSDK_OFFSET(0x1C0927E0)
#define RPG_CLIENT_SCHEDULEDATA__REFRESHSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1C091D60)

namespace RPG::Client
{
	inline static constexpr unsigned int ScheduleData_TypeDefinitionIndex = 69840;

	class ScheduleData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BPGECKIMDKM>* _Candidates; // 0x10
		::System::UInt32 _ModuleID_k__BackingField; // 0x18
		::System::UInt32 _EndTimeStamp; // 0x1C
		::RPG::Client::DateTimePro _BeginTimeDate; // 0x20
		::RPG::Client::ScheduleData_ScheduleDataUniqueKey _UniqueKey; // 0x28
		::System::UInt32 _ActiviyID; // 0x38
		::System::UInt32 _BeginTimeStamp; // 0x3C
		::RPG::Client::DateTimePro _EndTimeDate; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetWeekCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GETWEEKCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_ModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_MODULEID_OFFSET))(this);
		}

		::System::Void set_ModuleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_MODULEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Void set_ActivityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_ACTIVITYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_BEGINTIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_BeginTimeDate()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_BEGINTIMEDATE_OFFSET))(this);
		}

		::System::Void set_BeginTimeDate(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_BEGINTIMEDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_ENDTIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_EndTimeDate()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_ENDTIMEDATE_OFFSET))(this);
		}

		::System::Void set_EndTimeDate(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_SET_ENDTIMEDATE_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData_ScheduleDataUniqueKey get_UniqueKey()
		{
			return ((::RPG::Client::ScheduleData_ScheduleDataUniqueKey(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GET_UNIQUEKEY_OFFSET))(this);
		}

		static ::System::Boolean Between(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_BETWEEN_OFFSET))(a1, a2, a3);
		}

		::System::Boolean ContainsScheduleDataCandidate(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_CONTAINSSCHEDULEDATACANDIDATE_OFFSET))(this, a1);
		}

		::BPGECKIMDKM GetScheduleDataCandidate(::System::UInt32 a1)
		{
			return ((::BPGECKIMDKM(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_GETSCHEDULEDATACANDIDATE_OFFSET))(this, a1);
		}

		::System::Void AppendCandidate(::BPGECKIMDKM a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPGECKIMDKM))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_APPENDCANDIDATE_OFFSET))(this, a1);
		}

		static ::System::Int32 CandidateComparison(::BPGECKIMDKM a1, ::BPGECKIMDKM a2)
		{
			return ((::System::Int32(*)(::BPGECKIMDKM, ::BPGECKIMDKM))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA_CANDIDATECOMPARISON_OFFSET))(a1, a2);
		}

		::System::Void _RefreshScheduleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA__REFRESHSCHEDULEDATA_OFFSET))(this);
		}

		::System::Boolean _GetAvailableCandidate(::BPGECKIMDKM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPGECKIMDKM))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA__GETAVAILABLECANDIDATE_OFFSET))(this, a1);
		}

		::System::Void _FillDataWithCandidate(::BPGECKIMDKM a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPGECKIMDKM))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEDATA__FILLDATAWITHCANDIDATE_OFFSET))(this, a1);
		}

	};
}

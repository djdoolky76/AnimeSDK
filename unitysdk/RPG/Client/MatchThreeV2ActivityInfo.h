#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class MatchThreeV2LevelInfos; }
namespace RPG::Client { class ScheduleData; }

#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D704C60)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_ACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1D704BD0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1D7048E0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_PVPMODULEID_OFFSET UNITYSDK_OFFSET(0x1D704960)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_PVPMODULESCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1D704BF0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_PVPUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1D704C10)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET__ENTRANCEUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1D704AC0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET__PVPUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1D7049E0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_INITONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x1D705210)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_INITONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0x1D704F50)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_ISENTRANCEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1D7055B0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_ISPVPINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1D705440)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_ISPVPUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1D7054A0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_SET_ACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1D704BE0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_SET_PVPMODULESCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1D704C00)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO__COLLECTREQUIREDSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1D705090)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO__GETSUBMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0x1D705500)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO__INITONMODULEINITREQ_B__22_0_OFFSET UNITYSDK_OFFSET(0x1D705610)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2ActivityInfo_TypeDefinitionIndex = 67925;

	class MatchThreeV2ActivityInfo : public ::System::Object
	{
	public:
		::RPG::Client::ActivityData* _ActivityData_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _LevelUnlockSubmissionIDs; // 0x18
		::RPG::Client::ScheduleData* _PvpModuleScheduleData_k__BackingField; // 0x20
		::System::Boolean _IsMissionDataReady; // 0x28
		// static const ::System::Object _Version; // 0x0
		::System::Void _ctor(::RPG::Client::MatchThreeV2LevelInfos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2LevelInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::UInt32 get_PvpModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_PVPMODULEID_OFFSET))(this);
		}

		::System::UInt32 get__PvpUnlockSubmissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET__PVPUNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::System::UInt32 get__EntranceUnlockSubmissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET__ENTRANCEUNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::RPG::Client::ActivityData* get_ActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_ACTIVITYDATA_OFFSET))(this);
		}

		::System::Void set_ActivityData(::RPG::Client::ActivityData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_SET_ACTIVITYDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* get_PvpModuleScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_PVPMODULESCHEDULEDATA_OFFSET))(this);
		}

		::System::Void set_PvpModuleScheduleData(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_SET_PVPMODULESCHEDULEDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_PvpUnlockSubmissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_PVPUNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::System::Void InitOnModuleInitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_INITONMODULEINITREQ_OFFSET))(this);
		}

		::System::Void InitOnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_INITONLOGINFINISH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* _CollectRequiredSubMissionIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO__COLLECTREQUIREDSUBMISSIONIDS_OFFSET))(this);
		}

		::System::Boolean IsPvpInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_ISPVPINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean IsPvpUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_ISPVPUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsEntranceUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_ISENTRANCEUNLOCKED_OFFSET))(this);
		}

		::RPG::GameCore::SubMissionState _GetSubmissionState(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SubMissionState(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO__GETSUBMISSIONSTATE_OFFSET))(this, a1);
		}

		::System::Void _InitOnModuleInitReq_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO__INITONMODULEINITREQ_B__22_0_OFFSET))(this);
		}

	};
}

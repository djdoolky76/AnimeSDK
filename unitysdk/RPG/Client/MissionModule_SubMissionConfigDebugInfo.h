#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MissionModule; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace RPG::GameCore { class SubMissionRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MISSIONMODULE_SUBMISSIONCONFIGDEBUGINFO_BUILDCACHEDNULLLOG_OFFSET UNITYSDK_OFFSET(0xE17EFB0)
#define RPG_CLIENT_MISSIONMODULE_SUBMISSIONCONFIGDEBUGINFO_BUILDNULLLOG_OFFSET UNITYSDK_OFFSET(0xE17F310)
#define RPG_CLIENT_MISSIONMODULE_SUBMISSIONCONFIGDEBUGINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE199C00)
#define RPG_CLIENT_MISSIONMODULE_SUBMISSIONCONFIGDEBUGINFO_RECORDDISCARD_OFFSET UNITYSDK_OFFSET(0xE182820)
#define RPG_CLIENT_MISSIONMODULE_SUBMISSIONCONFIGDEBUGINFO_RECORDINITATTEMPT_OFFSET UNITYSDK_OFFSET(0xE181100)
#define RPG_CLIENT_MISSIONMODULE_SUBMISSIONCONFIGDEBUGINFO_RECORDINITSUCCESS_OFFSET UNITYSDK_OFFSET(0xE181220)
#define RPG_CLIENT_MISSIONMODULE_SUBMISSIONCONFIGDEBUGINFO_SHOULDLOG_OFFSET UNITYSDK_OFFSET(0xE17EF60)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule_SubMissionConfigDebugInfo_TypeDefinitionIndex = 68078;

	struct alignas(4) MissionModule_SubMissionConfigDebugInfo
	{
		static ::System::Int32* StaticGet_s_DiscardCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SubMissionConfigDebugInfo")->GetStaticField(0x152E0);
		}

		static ::System::Int32* StaticGet_s_LastAttemptRowHash()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SubMissionConfigDebugInfo")->GetStaticField(0x152E4);
		}

		static ::System::Int32* StaticGet_s_InitAttemptCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SubMissionConfigDebugInfo")->GetStaticField(0x152E8);
		}

		static ::System::Int32* StaticGet_s_LastDiscardModuleHash()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SubMissionConfigDebugInfo")->GetStaticField(0x152EC);
		}

		static ::System::Boolean* StaticGet_s_LastAttemptHadConfig()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "SubMissionConfigDebugInfo")->GetStaticField(0x152F0);
		}

		static ::System::Boolean* StaticGet_s_LastDiscardHadConfig()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "SubMissionConfigDebugInfo")->GetStaticField(0x152F1);
		}

		static ::System::Int32* StaticGet_s_LastAttemptModuleHash()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SubMissionConfigDebugInfo")->GetStaticField(0x152F4);
		}

		static ::System::Int32* StaticGet_s_LastSuccessRowHash()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SubMissionConfigDebugInfo")->GetStaticField(0x152F8);
		}

		static ::System::Int32* StaticGet_s_LastSuccessModuleHash()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SubMissionConfigDebugInfo")->GetStaticField(0x152FC);
		}

		static ::System::Int32* StaticGet_s_InitSuccessCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SubMissionConfigDebugInfo")->GetStaticField(0x15300);
		}

		static ::System::Int32* StaticGet_s_LastDiscardRowHash()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SubMissionConfigDebugInfo")->GetStaticField(0x15304);
		}

		// static const ::System::Object DEBUG_SUB_MISSION_ID; // 0x0
		static ::System::Boolean ShouldLog(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_SUBMISSIONCONFIGDEBUGINFO_SHOULDLOG_OFFSET))(a1);
		}

		static ::System::Void RecordInitAttempt(::RPG::Client::MissionModule* a1, ::RPG::GameCore::SubMissionRow* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::SubMissionInfoConfig*>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::MissionModule*, ::RPG::GameCore::SubMissionRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::SubMissionInfoConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_SUBMISSIONCONFIGDEBUGINFO_RECORDINITATTEMPT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RecordInitSuccess(::RPG::Client::MissionModule* a1, ::RPG::GameCore::SubMissionRow* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::SubMissionInfoConfig*>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::MissionModule*, ::RPG::GameCore::SubMissionRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::SubMissionInfoConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_SUBMISSIONCONFIGDEBUGINFO_RECORDINITSUCCESS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RecordDiscard(::RPG::Client::MissionModule* a1, ::RPG::GameCore::SubMissionRow* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::SubMissionInfoConfig*>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::MissionModule*, ::RPG::GameCore::SubMissionRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::SubMissionInfoConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_SUBMISSIONCONFIGDEBUGINFO_RECORDDISCARD_OFFSET))(a1, a2, a3);
		}

		static ::System::String* BuildCachedNullLog(::RPG::Client::MissionModule* a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::SubMissionInfoConfig*>* a3)
		{
			return ((::System::String*(*)(::RPG::Client::MissionModule*, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::SubMissionInfoConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_SUBMISSIONCONFIGDEBUGINFO_BUILDCACHEDNULLLOG_OFFSET))(a1, a2, a3);
		}

		static ::System::String* BuildNullLog(::RPG::Client::MissionModule* a1, ::System::UInt32 a2, ::RPG::GameCore::SubMissionRow* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::SubMissionInfoConfig*>* a4)
		{
			return ((::System::String*(*)(::RPG::Client::MissionModule*, ::System::UInt32, ::RPG::GameCore::SubMissionRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::SubMissionInfoConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_SUBMISSIONCONFIGDEBUGINFO_BUILDNULLLOG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 GetHashCode(::System::Object* a1)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_SUBMISSIONCONFIGDEBUGINFO_GETHASHCODE_OFFSET))(a1);
		}

	};
}

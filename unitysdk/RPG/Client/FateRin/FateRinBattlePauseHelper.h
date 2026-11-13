#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin { class FateRinBattlePauseHelper; }
namespace RPG::Client::FateRin::Challenge { class FateRinBattlePauseChallengeViewModel; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C5150)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GETCURBATTLESTAGEID_OFFSET UNITYSDK_OFFSET(0x1E0C52D0)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GETCURFIGHTENEMYHOUGUDESC_OFFSET UNITYSDK_OFFSET(0x1E0C5160)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E0C50C0)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_ISINSTORYFIGHT_OFFSET UNITYSDK_OFFSET(0x1E0C57B0)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_POPPENDINGBATTLERESTARTSTATE_OFFSET UNITYSDK_OFFSET(0x1E0C5BC0)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_RESTARTBATTLE_OFFSET UNITYSDK_OFFSET(0x1E0C5920)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_TRIGGERCHALLENGEFIGHTRESTART_OFFSET UNITYSDK_OFFSET(0x1E0C5C10)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_TRIGGERHOUGUFIGHTRESTART_OFFSET UNITYSDK_OFFSET(0x1E0C5CD0)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_TRYGETPAUSECHALLENGEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1E0C5550)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinBattlePauseHelper_TypeDefinitionIndex = 83392;

	class FateRinBattlePauseHelper : public ::System::Object
	{
	public:
		::System::UInt32 _WillRestartFightID; // 0x10
		::System::Boolean _IsPendingBattleRestart; // 0x14
		static ::RPG::Client::FateRin::FateRinBattlePauseHelper** StaticGet__Instance()
		{
			return (::RPG::Client::FateRin::FateRinBattlePauseHelper**)UnitySDK::FromName("RPG.Client.FateRin", "FateRinBattlePauseHelper")->GetStaticField(0x5C9A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::FateRinBattlePauseHelper* get_Instance()
		{
			return ((::RPG::Client::FateRin::FateRinBattlePauseHelper*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GET_INSTANCE_OFFSET))();
		}

		::System::String* GetCurFightEnemyHouguDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GETCURFIGHTENEMYHOUGUDESC_OFFSET))(this);
		}

		::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeViewModel* TryGetPauseChallengeViewModel()
		{
			return ((::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_TRYGETPAUSECHALLENGEVIEWMODEL_OFFSET))(this);
		}

		::System::Boolean IsInStoryFight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_ISINSTORYFIGHT_OFFSET))(this);
		}

		::System::UInt32 GetCurBattleStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GETCURBATTLESTAGEID_OFFSET))(this);
		}

		::System::Void RestartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_RESTARTBATTLE_OFFSET))(this);
		}

		::System::Boolean PopPendingBattleRestartState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_POPPENDINGBATTLERESTARTSTATE_OFFSET))(this);
		}

		::System::Void TriggerChallengeFightRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_TRIGGERCHALLENGEFIGHTRESTART_OFFSET))(this);
		}

		::System::Void TriggerHouguFightRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_TRIGGERHOUGUFIGHTRESTART_OFFSET))(this);
		}

	};
}

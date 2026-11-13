#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleResultProcess_RestartOption.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleResultProcess_ConfigItem; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }

#define RPG_CLIENT_BATTLERESULTPROCESS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD7E610)
#define RPG_CLIENT_BATTLERESULTPROCESS_CLIENTPRERESULTPROCESS_OFFSET UNITYSDK_OFFSET(0x1B1F5CC0)
#define RPG_CLIENT_BATTLERESULTPROCESS_GET_BATTLERESTARTOPTION_OFFSET UNITYSDK_OFFSET(0x1B1C73B0)
#define RPG_CLIENT_BATTLERESULTPROCESS_HAVERESULTPAGEINBATTLEPHASE_OFFSET UNITYSDK_OFFSET(0x1B1BCA80)
#define RPG_CLIENT_BATTLERESULTPROCESS_STARTRESULTPROCESS_OFFSET UNITYSDK_OFFSET(0x1B1F5D10)
#define RPG_CLIENT_BATTLERESULTPROCESS__GETCURRENTCONFIG_OFFSET UNITYSDK_OFFSET(0x1CD7E1D0)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISBOSSCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1B1F5E90)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISCHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0x1B1F5F00)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISFATERINCHALLENGEFIGHTSTAGE_OFFSET UNITYSDK_OFFSET(0x1CD7D800)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISFATERINHOUGUFIGHTSTAGE_OFFSET UNITYSDK_OFFSET(0x1CD7D300)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISFATERINSTORYFIGHTSTAGE_OFFSET UNITYSDK_OFFSET(0x1CD7D580)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISFIGHTFESTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1B1F5D60)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISFINALITYBATTLEEASYSTAGE_OFFSET UNITYSDK_OFFSET(0x1CD7DC60)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISINFARMWEEKLY_OFFSET UNITYSDK_OFFSET(0x1B1F6460)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISINFIGHTACTIVITYENDLESSBATTLE_OFFSET UNITYSDK_OFFSET(0x1B1F5F60)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISINROGUEENDLESSBATTLE_OFFSET UNITYSDK_OFFSET(0x1B1F5FA0)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISINROUGETOURNBOSSCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1B1F63D0)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISNOTFIGHTFESTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1B1F5DC0)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISREALITYSHOWFIRSTSTAGE_OFFSET UNITYSDK_OFFSET(0x1CD7DFD0)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISSTORYCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1B1F5E20)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISTRIGGERBATTLEINRAIDFORBIDEDITTEAM_OFFSET UNITYSDK_OFFSET(0x1B1F6180)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISTRIGGERBATTLEINRAID_OFFSET UNITYSDK_OFFSET(0x1B1F6030)
#define RPG_CLIENT_BATTLERESULTPROCESS__ISTRIGGERBATTLE_OFFSET UNITYSDK_OFFSET(0x1B1F6340)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_AETHERDIVIDE_OFFSET UNITYSDK_OFFSET(0x1CD7CBE0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_BATTLECOLLEGE_OFFSET UNITYSDK_OFFSET(0x1CD7CD00)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1B1F65C0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_ELATIONACTIVITY_OFFSET UNITYSDK_OFFSET(0x1CD7D280)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_EVOLVEBUILDACTIVITY_OFFSET UNITYSDK_OFFSET(0x1CD7D060)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FANTASTICSTORY_OFFSET UNITYSDK_OFFSET(0x1CD7CC70)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FARM_OFFSET UNITYSDK_OFFSET(0x1CD7CAC0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FARM_WEEKLY_OFFSET UNITYSDK_OFFSET(0x1B1F6860)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FATEACTIVITY_OFFSET UNITYSDK_OFFSET(0x1CD7D170)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FATERINCHALLENGEFIGHTSTAGE_OFFSET UNITYSDK_OFFSET(0x1CD7DB40)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FATERINHOUGUFIGHTSTAGE_OFFSET UNITYSDK_OFFSET(0x1CD7DA20)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FATERINSTORYFIGHTSTAGE_OFFSET UNITYSDK_OFFSET(0x1CD7DAB0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FEVERTIMEACTIVITY_OFFSET UNITYSDK_OFFSET(0x1CD7CE20)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FIGHTACTIVITY_OFFSET UNITYSDK_OFFSET(0x1CD7CB50)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FIGHTFESTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1CD7CFD0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FINALITYACTIVITY_EASYSTAGE_OFFSET UNITYSDK_OFFSET(0x1CD7DE30)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_FINALITYACTIVITY_OFFSET UNITYSDK_OFFSET(0x1CD7DEC0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_GRIDFIGHTACTIVITY_OFFSET UNITYSDK_OFFSET(0x1CD7D200)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_LOCALLEGEND_OFFSET UNITYSDK_OFFSET(0x1CD7DBD0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_POST_OFFSET UNITYSDK_OFFSET(0x1B1F6560)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_PRE_OFFSET UNITYSDK_OFFSET(0x1B1F6500)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_REALITYSHOWACTIVITY_OFFSET UNITYSDK_OFFSET(0x1CD7DF40)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUECHALLENGEACTIVITY_OFFSET UNITYSDK_OFFSET(0x1B1F6690)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUEENDLESSACTIVITY_OFFSET UNITYSDK_OFFSET(0x1B1F6710)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUERELIC_OFFSET UNITYSDK_OFFSET(0x1B1F67E0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUETOURNBOSS_OFFSET UNITYSDK_OFFSET(0x1B1F6790)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_STARFIGHT_OFFSET UNITYSDK_OFFSET(0x1CD7CF40)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_SUMMONACTIVITY_OFFSET UNITYSDK_OFFSET(0x1CD7D0F0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_SWORDTRAININGACTIVITY_OFFSET UNITYSDK_OFFSET(0x1CD7CEB0)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_TELEVISIONACTIVITY_OFFSET UNITYSDK_OFFSET(0x1CD7CD90)
#define RPG_CLIENT_BATTLERESULTPROCESS__RP_VERSESIMULATION_OFFSET UNITYSDK_OFFSET(0x1B1F6610)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess_TypeDefinitionIndex = 62371;

	class BattleResultProcess : public ::System::Object
	{
	public:
		static ::RPG::Client::BattleResultProcess_ConfigItem** StaticGet__DefaultConfig()
		{
			return (::RPG::Client::BattleResultProcess_ConfigItem**)UnitySDK::FromName("RPG.Client", "BattleResultProcess")->GetStaticField(0x9FF0);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet__AllConfigs()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("RPG.Client", "BattleResultProcess")->GetStaticField(0x9FF8);
		}

		static ::System::Single* StaticGet_WaitLastKillTimeout()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "BattleResultProcess")->GetStaticField(0xFC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS_CCTOR_OFFSET))();
		}

		static ::System::Boolean HaveResultPageInBattlePhase()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS_HAVERESULTPAGEINBATTLEPHASE_OFFSET))();
		}

		static ::RPG::Client::BattleResultProcess_RestartOption get_BattleRestartOption()
		{
			return ((::RPG::Client::BattleResultProcess_RestartOption(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS_GET_BATTLERESTARTOPTION_OFFSET))();
		}

		static ::System::Collections::IEnumerator* ClientPreResultProcess(::System::Boolean a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS_CLIENTPRERESULTPROCESS_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* StartResultProcess(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS_STARTRESULTPROCESS_OFFSET))(a1);
		}

		static ::System::Boolean _IsFightFestChallenge()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISFIGHTFESTCHALLENGE_OFFSET))();
		}

		static ::System::Boolean _IsNotFightFestChallenge()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISNOTFIGHTFESTCHALLENGE_OFFSET))();
		}

		static ::System::Boolean _IsStoryChallenge()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISSTORYCHALLENGE_OFFSET))();
		}

		static ::System::Boolean _IsBossChallenge()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISBOSSCHALLENGE_OFFSET))();
		}

		static ::System::Boolean _IsChallengePeak()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISCHALLENGEPEAK_OFFSET))();
		}

		static ::System::Boolean _IsInFightActivityEndlessBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISINFIGHTACTIVITYENDLESSBATTLE_OFFSET))();
		}

		static ::System::Boolean _IsInRogueEndlessBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISINROGUEENDLESSBATTLE_OFFSET))();
		}

		static ::System::Boolean _IsTriggerBattleInRaid()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISTRIGGERBATTLEINRAID_OFFSET))();
		}

		static ::System::Boolean _IsTriggerBattleInRaidForbidEditTeam()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISTRIGGERBATTLEINRAIDFORBIDEDITTEAM_OFFSET))();
		}

		static ::System::Boolean _IsTriggerBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISTRIGGERBATTLE_OFFSET))();
		}

		static ::System::Boolean _IsInRougeTournBossChallenge()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISINROUGETOURNBOSSCHALLENGE_OFFSET))();
		}

		static ::System::Boolean _IsInFarmWeekly()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISINFARMWEEKLY_OFFSET))();
		}

		static ::System::Collections::IEnumerator* _RP_Pre(::RPG::GameCore::BattleResultState a1, ::RPG::Client::BattleResultProcess_ConfigItem* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState, ::RPG::Client::BattleResultProcess_ConfigItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_PRE_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* _RP_Post(::RPG::GameCore::BattleResultState a1, ::RPG::Client::BattleResultProcess_ConfigItem* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState, ::RPG::Client::BattleResultProcess_ConfigItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_POST_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* _RP_Default(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_DEFAULT_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_VerseSimulation(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_VERSESIMULATION_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_RogueChallengeActivity(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUECHALLENGEACTIVITY_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_RogueEndlessActivity(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUEENDLESSACTIVITY_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_RogueTournBoss(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUETOURNBOSS_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_RogueRelic(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_ROGUERELIC_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_Farm_Weekly(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FARM_WEEKLY_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_Farm(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FARM_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_FightActivity(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FIGHTACTIVITY_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_AetherDivide(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_AETHERDIVIDE_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_FantasticStory(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FANTASTICSTORY_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_BattleCollege(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_BATTLECOLLEGE_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_TelevisionActivity(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_TELEVISIONACTIVITY_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_FeverTimeActivity(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FEVERTIMEACTIVITY_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_SwordTrainingActivity(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_SWORDTRAININGACTIVITY_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_StarFight(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_STARFIGHT_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_FightFestChallenge(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FIGHTFESTCHALLENGE_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_EvolveBuildActivity(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_EVOLVEBUILDACTIVITY_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_SummonActivity(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_SUMMONACTIVITY_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_FateActivity(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FATEACTIVITY_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_GridFightActivity(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_GRIDFIGHTACTIVITY_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_ElationActivity(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_ELATIONACTIVITY_OFFSET))(a1);
		}

		static ::System::Boolean _IsFateRinHouguFightStage()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISFATERINHOUGUFIGHTSTAGE_OFFSET))();
		}

		static ::System::Boolean _IsFateRinStoryFightStage()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISFATERINSTORYFIGHTSTAGE_OFFSET))();
		}

		static ::System::Boolean _IsFateRinChallengeFightStage()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISFATERINCHALLENGEFIGHTSTAGE_OFFSET))();
		}

		static ::System::Collections::IEnumerator* _RP_FateRinHouguFightStage(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FATERINHOUGUFIGHTSTAGE_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_FateRinStoryFightStage(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FATERINSTORYFIGHTSTAGE_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_FateRinChallengeFightStage(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FATERINCHALLENGEFIGHTSTAGE_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_LocalLegend(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_LOCALLEGEND_OFFSET))(a1);
		}

		static ::System::Boolean _IsFinalityBattleEasyStage()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISFINALITYBATTLEEASYSTAGE_OFFSET))();
		}

		static ::System::Collections::IEnumerator* _RP_FinalityActivity_EasyStage(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FINALITYACTIVITY_EASYSTAGE_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_FinalityActivity(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_FINALITYACTIVITY_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _RP_RealityShowActivity(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__RP_REALITYSHOWACTIVITY_OFFSET))(a1);
		}

		static ::System::Boolean _IsRealityShowFirstStage()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__ISREALITYSHOWFIRSTSTAGE_OFFSET))();
		}

		static ::RPG::Client::BattleResultProcess_ConfigItem* _GetCurrentConfig()
		{
			return ((::RPG::Client::BattleResultProcess_ConfigItem*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS__GETCURRENTCONFIG_OFFSET))();
		}

	};
}

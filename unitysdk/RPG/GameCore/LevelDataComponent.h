#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarGlobalBuffData.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/RPG/GameCore/BattleTargetDetailData.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
class BABMCGPMDHM;
class EKFMIDBJDIA;
class FABMDCOFHCG;
class HIJGDJLAOKI;
class JNIAKLNCCCH;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class InfiniteBattleData; }
namespace RPG::GameCore { class LevelDataComponent_MonsterSequence; }
namespace RPG::GameCore { class LineUpContext; }
namespace RPG::GameCore { class StageParamEntry; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELDATACOMPONENT_ADDSTAGEABILITY_OFFSET UNITYSDK_OFFSET(0xE6CFE80)
#define RPG_GAMECORE_LEVELDATACOMPONENT_APPLYDELAYEXECUTEONNEXTWAVE_OFFSET UNITYSDK_OFFSET(0xE6D89C0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_CREATEBATTLETARGET_OFFSET UNITYSDK_OFFSET(0xE6E8AA0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_CREATEGLOBALSHIELD_OFFSET UNITYSDK_OFFSET(0xE6E7A50)
#define RPG_GAMECORE_LEVELDATACOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE6E6480)
#define RPG_GAMECORE_LEVELDATACOMPONENT_DISABLEBATTLETARGET_OFFSET UNITYSDK_OFFSET(0xE6E8F90)
#define RPG_GAMECORE_LEVELDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE6E9E30)
#define RPG_GAMECORE_LEVELDATACOMPONENT_EVALUATESTAGEMAZEBUFFDESCPARAM_OFFSET UNITYSDK_OFFSET(0xE6E9460)
#define RPG_GAMECORE_LEVELDATACOMPONENT_FORCETREATWAVESASINFINITE_OFFSET UNITYSDK_OFFSET(0xE6D6FE0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETAVATARGLOBALBUFFSTATE_OFFSET UNITYSDK_OFFSET(0xE6E9C10)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETBATTLETARGETINFO_OFFSET UNITYSDK_OFFSET(0xE6E8EE0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETCURRENTSTAGECONFIG_OFFSET UNITYSDK_OFFSET(0xE6D7020)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETPROTECTINGGLOBALSHIELD_OFFSET UNITYSDK_OFFSET(0xE6E7BF0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALGLOBALSHIELDAMT_OFFSET UNITYSDK_OFFSET(0xE6E83A0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALSCOREBYDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xE6E9270)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALSCORE_OFFSET UNITYSDK_OFFSET(0xE6E9140)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETWAVELISTFORINFINITEBATTLE_OFFSET UNITYSDK_OFFSET(0xE6D7550)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GET_BATTLESCORINGTOTAL_OFFSET UNITYSDK_OFFSET(0xE6EAFF0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GET_ISINFINITEWAVE_OFFSET UNITYSDK_OFFSET(0xE6E63B0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GET_MONSTERSEQ_OFFSET UNITYSDK_OFFSET(0xE6E6470)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GET_STAGEABILITYLIST_OFFSET UNITYSDK_OFFSET(0xE6EAFD0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xE6E6B00)
#define RPG_GAMECORE_LEVELDATACOMPONENT_INITEVENTS_OFFSET UNITYSDK_OFFSET(0xE6E76D0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_ISINBATTLEACHIEVEMENTWHITELIST_OFFSET UNITYSDK_OFFSET(0xE6E9CF0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_NEEDDELAYEXECUTEONNEXTWAVE_OFFSET UNITYSDK_OFFSET(0xE6E98A0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_REGISTERDELAYEXECUTEONNEXTWAVE_OFFSET UNITYSDK_OFFSET(0xE6E9960)
#define RPG_GAMECORE_LEVELDATACOMPONENT_REMOVEDEPLETEDSHIELDS_OFFSET UNITYSDK_OFFSET(0xE6E7E40)
#define RPG_GAMECORE_LEVELDATACOMPONENT_REMOVEGLOBALSHIELD_OFFSET UNITYSDK_OFFSET(0xE6E7CE0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_REMOVESTAGEABILITY_1_OFFSET UNITYSDK_OFFSET(0xE6E79C0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_REMOVESTAGEABILITY_OFFSET UNITYSDK_OFFSET(0xE6CFDF0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_SETAVATARGLOBALBUFFSTATE_OFFSET UNITYSDK_OFFSET(0xE6E9A80)
#define RPG_GAMECORE_LEVELDATACOMPONENT_SETBATTLEACHIEVEMENTWHITELIST_OFFSET UNITYSDK_OFFSET(0xE6E9D70)
#define RPG_GAMECORE_LEVELDATACOMPONENT_SETBATTLETARGETPROGRESS_OFFSET UNITYSDK_OFFSET(0xE6E8CD0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_SET_STAGEABILITYLIST_OFFSET UNITYSDK_OFFSET(0xE6EAFE0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_STATISTICBATTLETARGETLIST_OFFSET UNITYSDK_OFFSET(0xE6E84A0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_TREATWAVESASINFINITE_OFFSET UNITYSDK_OFFSET(0xE6D7480)
#define RPG_GAMECORE_LEVELDATACOMPONENT_UNINITEVENTS_OFFSET UNITYSDK_OFFSET(0xE6E9FC0)
#define RPG_GAMECORE_LEVELDATACOMPONENT__INITMONSTERSEQUENCE_OFFSET UNITYSDK_OFFSET(0xE6E5EA0)
#define RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERCREATE_OFFSET UNITYSDK_OFFSET(0xE6EA9C0)
#define RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERDIEORESCAPE_OFFSET UNITYSDK_OFFSET(0xE6EA500)
#define RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERHPCHANGED_OFFSET UNITYSDK_OFFSET(0xE6EAEB0)
#define RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELWAVEMONSTERBEGINEVENT_OFFSET UNITYSDK_OFFSET(0xE6EA2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDataComponent_TypeDefinitionIndex = 57593;

	class LevelDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _StageAbilityList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarGlobalBuffData>* AvatarGlobalBuffList; // 0x20
		::RPG::GameCore::LevelDataComponent_MonsterSequence* _MonsterSeq; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BattleAchievementList; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* BattleTargetList_FinishOnEnterBattle; // 0x38
		::System::Collections::Generic::List_1<::JNIAKLNCCCH*>* _DelayExeQueue; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BattleConditionList; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BattleRaidTargetList; // 0x50
		::System::Collections::Generic::List_1<::BABMCGPMDHM*>* _GlobalShieldList; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* BattleScoringList; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BattleRougeGoalList; // 0x68
		::RPG::GameCore::TurnBasedAbilityComponent* _TBAbility; // 0x70
		::Il2CppArray<::System::UInt32>* BattleAchievementWhiteList; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BattleClientAchievementList; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* DisabledBattleTargetList; // 0x88
		::RPG::GameCore::InfiniteBattleData* InfiniteBattleData; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleTargetDetailData>* BattleTargetList; // 0x98
		::System::Int32 _GlobalShieldIDIncr; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_CTOR_OFFSET))(this);
		}

		::System::Void _InitMonsterSequence(::RPG::GameCore::LineUpContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LineUpContext*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__INITMONSTERSEQUENCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelDataComponent_MonsterSequence* get_MonsterSeq()
		{
			return ((::RPG::GameCore::LevelDataComponent_MonsterSequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GET_MONSTERSEQ_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_INITCOMPONENT_OFFSET))(this, a1);
		}

		::FABMDCOFHCG* AddStageAbility(::System::String* a1, ::System::Collections::Generic::IList_1<::RPG::GameCore::StageParamEntry*>* a2)
		{
			return ((::FABMDCOFHCG*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::RPG::GameCore::StageParamEntry*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_ADDSTAGEABILITY_OFFSET))(this, a1, a2);
		}

		::System::Boolean RemoveStageAbility(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_REMOVESTAGEABILITY_OFFSET))(this, a1);
		}

		::System::Boolean RemoveStageAbility_1(::FABMDCOFHCG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FABMDCOFHCG*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_REMOVESTAGEABILITY_1_OFFSET))(this, a1);
		}

		::System::Int32 CreateGlobalShield(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::FixPoint a2, ::KFELGAIGHAP* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::FixPoint, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_CREATEGLOBALSHIELD_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* GetProtectingGlobalShield(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETPROTECTINGGLOBALSHIELD_OFFSET))(this, a1);
		}

		::System::Void RemoveGlobalShield(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_REMOVEGLOBALSHIELD_OFFSET))(this, a1);
		}

		::System::Void RemoveDepletedShields()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_REMOVEDEPLETEDSHIELDS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetTotalGlobalShieldAmt()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALGLOBALSHIELDAMT_OFFSET))(this);
		}

		::System::Boolean ForceTreatWavesAsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_FORCETREATWAVESASINFINITE_OFFSET))(this);
		}

		::System::Boolean TreatWavesAsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_TREATWAVESASINFINITE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HIJGDJLAOKI*>* GetWaveListForInfiniteBattle()
		{
			return ((::System::Collections::Generic::List_1<::HIJGDJLAOKI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETWAVELISTFORINFINITEBATTLE_OFFSET))(this);
		}

		::RPG::GameCore::StageRow* GetCurrentStageConfig()
		{
			return ((::RPG::GameCore::StageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETCURRENTSTAGECONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* StatisticBattleTargetList()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_STATISTICBATTLETARGETLIST_OFFSET))(this);
		}

		::System::Void CreateBattleTarget(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_CREATEBATTLETARGET_OFFSET))(this, a1, a2);
		}

		::System::Void SetBattleTargetProgress(::System::UInt32 a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_SETBATTLETARGETPROGRESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetBattleTargetInfo(::System::UInt32 a1, ::RPG::GameCore::BattleTargetDetailData a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::BattleTargetDetailData))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETBATTLETARGETINFO_OFFSET))(this, a1, a2);
		}

		::System::Void DisableBattleTarget(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_DISABLEBATTLETARGET_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetTotalScore()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALSCORE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetTotalScoreByDisplayType(::RPG::GameCore::BattleScoringDisplayType a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::BattleScoringDisplayType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALSCOREBYDISPLAYTYPE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* EvaluateStageMazeBuffDescParam(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_EVALUATESTAGEMAZEBUFFDESCPARAM_OFFSET))(this, a1, a2);
		}

		::System::Boolean NeedDelayExecuteOnNextWave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_NEEDDELAYEXECUTEONNEXTWAVE_OFFSET))(this);
		}

		::System::Void RegisterDelayExecuteOnNextWave(::JNIAKLNCCCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNIAKLNCCCH*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_REGISTERDELAYEXECUTEONNEXTWAVE_OFFSET))(this, a1);
		}

		::System::Void ApplyDelayExecuteOnNextWave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_APPLYDELAYEXECUTEONNEXTWAVE_OFFSET))(this);
		}

		::System::Void SetAvatarGlobalBuffState(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_SETAVATARGLOBALBUFFSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetAvatarGlobalBuffState(::System::UInt32 a1, ::RPG::GameCore::AvatarGlobalBuffData a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::AvatarGlobalBuffData))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETAVATARGLOBALBUFFSTATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInBattleAchievementWhiteList(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_ISINBATTLEACHIEVEMENTWHITELIST_OFFSET))(this, a1);
		}

		::System::Void SetBattleAchievementWhiteList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_SETBATTLEACHIEVEMENTWHITELIST_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnLevelWaveMonsterBeginEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELWAVEMONSTERBEGINEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCharacterDieOrEscape(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERDIEORESCAPE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCharacterCreate(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERCREATE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCharacterHPChanged(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERHPCHANGED_OFFSET))(this, a1);
		}

		::System::Void InitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_INITEVENTS_OFFSET))(this);
		}

		::System::Void UninitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_UNINITEVENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_StageAbilityList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GET_STAGEABILITYLIST_OFFSET))(this);
		}

		::System::Void set_StageAbilityList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_SET_STAGEABILITYLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BattleScoringTotal()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GET_BATTLESCORINGTOTAL_OFFSET))(this);
		}

		::System::Boolean get_IsInfiniteWave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GET_ISINFINITEWAVE_OFFSET))(this);
		}

	};
}

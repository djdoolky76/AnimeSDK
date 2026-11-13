#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNCFAGLOBHO.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ABIEGBANPEE;
class AFGMNFFBBIG;
class BBDHMCAIGFI;
class CKCDIAAFICJ;
class DIKAEHJFGEE;
class DPMFBDHCNNO;
class EKFMIDBJDIA;
class FCDDPJIEDGP;
class FIDLDJOOPMO;
class GGDFGFCEOGA;
class IDEHJPPOIFL;
class JEHAOOIJFAG;
class KHJJGHDAPFD;
class LAKOGCBIPHB;
class LJAPBLLGAJN;
class LLPEHDFMLNJ;
class MKICACCMBOF;
class MNCLBEFPPGB;
class OMAHHACEANO;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class CharacterSkillCustomStatisticConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PVECharacterStt; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_STATISTICSCOMPONENT_ADDCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0x1205A0F0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_BUILDPVESTATISTICS_OFFSET UNITYSDK_OFFSET(0x12052B10)
#define RPG_GAMECORE_STATISTICSCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x12062E00)
#define RPG_GAMECORE_STATISTICSCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12051FC0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETAVATARGLOBALBUFFSTT_OFFSET UNITYSDK_OFFSET(0x1205BA20)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETAVATARSTTBYAVATARID_OFFSET UNITYSDK_OFFSET(0x120586C0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETBATTLEEVENTSTT_OFFSET UNITYSDK_OFFSET(0x1205B240)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETCHARACTERSTT_OFFSET UNITYSDK_OFFSET(0x1205B850)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETKILLEDMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0x12059DC0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETKILLEDMONSTERWAVEINDEXLISTBYWAVE_OFFSET UNITYSDK_OFFSET(0x12059B40)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERPHASESTT_OFFSET UNITYSDK_OFFSET(0x1205AD40)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERSTTFULL_OFFSET UNITYSDK_OFFSET(0x1205A700)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERSTT_OFFSET UNITYSDK_OFFSET(0x1205ACE0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETSERVANTSTT_OFFSET UNITYSDK_OFFSET(0x1205B550)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETSKILLUSEPROPERTYBYABILITYNAME_OFFSET UNITYSDK_OFFSET(0x1205BB90)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETTURNTAKENDAMAGE_OFFSET UNITYSDK_OFFSET(0x12059F50)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GET_BATTLEEVENTSTT_OFFSET UNITYSDK_OFFSET(0x12062DF0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GET_FEVERTIME_OFFSET UNITYSDK_OFFSET(0x12062DD0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_HASTRIGGEREDCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0x1205B130)
#define RPG_GAMECORE_STATISTICSCOMPONENT_INITPVESTATISTICS_OFFSET UNITYSDK_OFFSET(0x12051960)
#define RPG_GAMECORE_STATISTICSCOMPONENT_RECORDAVATARINITIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x1205A000)
#define RPG_GAMECORE_STATISTICSCOMPONENT_SETREPORTCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0x1205A280)
#define RPG_GAMECORE_STATISTICSCOMPONENT_SET_FEVERTIME_OFFSET UNITYSDK_OFFSET(0x12062DE0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_TRIGGERSTATISTICEVENT_OFFSET UNITYSDK_OFFSET(0x1205A4F0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_TRYGETMONSTERSTTBYCONFIGID_OFFSET UNITYSDK_OFFSET(0x1205AEA0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_TRYGETMONSTERSTTBYTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1205AFE0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ADDSKILLPERFORMTIME_OFFSET UNITYSDK_OFFSET(0x12060C00)
#define RPG_GAMECORE_STATISTICSCOMPONENT__BUILDACTIVITYSUBMODESTT_OFFSET UNITYSDK_OFFSET(0x12059710)
#define RPG_GAMECORE_STATISTICSCOMPONENT__CREATELIGHTTEAMPROPERTYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1205C1F0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__FILLATTACKANDDAMAGEINFO_OFFSET UNITYSDK_OFFSET(0x12058420)
#define RPG_GAMECORE_STATISTICSCOMPONENT__FILLCHARACTERSKILLEQUIPANDRELIC_OFFSET UNITYSDK_OFFSET(0x12058D50)
#define RPG_GAMECORE_STATISTICSCOMPONENT__GETAVATARPROPERTY_OFFSET UNITYSDK_OFFSET(0x12058B50)
#define RPG_GAMECORE_STATISTICSCOMPONENT__INCREMENTCOUNTBYENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1205DAA0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__INITBYSTAGE_OFFSET UNITYSDK_OFFSET(0x12051BD0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__INITEVENTS_OFFSET UNITYSDK_OFFSET(0x12050EA0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ISMONSTERSTATLOGBLOCKED_OFFSET UNITYSDK_OFFSET(0x120596C0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONABILITYANYHPCHANGE_OFFSET UNITYSDK_OFFSET(0x1205FB30)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONBATTLEEVENTDIE_OFFSET UNITYSDK_OFFSET(0x1205CB60)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERCREATE_OFFSET UNITYSDK_OFFSET(0x1205C6E0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERDIE_OFFSET UNITYSDK_OFFSET(0x1205C780)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERLIMBO_OFFSET UNITYSDK_OFFSET(0x1205CBF0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERREVIVE_OFFSET UNITYSDK_OFFSET(0x1205D390)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONENTITYDIE_OFFSET UNITYSDK_OFFSET(0x1205C810)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONENTITYESCAPE_OFFSET UNITYSDK_OFFSET(0x1205D170)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x12050E10)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELACTIONCOUNTACTIVE_OFFSET UNITYSDK_OFFSET(0x1205DF00)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELACTIONDELAYCHANGED_OFFSET UNITYSDK_OFFSET(0x12061770)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERBEFOREADDMODIFIER_OFFSET UNITYSDK_OFFSET(0x1205E340)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERBREAKSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1205E080)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERENDATTACK_OFFSET UNITYSDK_OFFSET(0x12062A90)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCURRENTBPCHANGE_OFFSET UNITYSDK_OFFSET(0x12061680)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCURRENTSPCHANGE_OFFSET UNITYSDK_OFFSET(0x12061270)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCUSTOMSTRINGEVENT_OFFSET UNITYSDK_OFFSET(0x1205E700)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDAMAGEENTITYPHASE1_OFFSET UNITYSDK_OFFSET(0x1205F950)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDAMAGEENTITY_OFFSET UNITYSDK_OFFSET(0x1205EB50)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDISPELMODIFIER_OFFSET UNITYSDK_OFFSET(0x1205DB70)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENDUSESKILL_OFFSET UNITYSDK_OFFSET(0x12060D90)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENTITYINITSHIELD_OFFSET UNITYSDK_OFFSET(0x12061A00)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENTITYSHIELDCHANGE_OFFSET UNITYSDK_OFFSET(0x12061D80)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELHEALENTITY_OFFSET UNITYSDK_OFFSET(0x1205FF30)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELINSERTABILITY_OFFSET UNITYSDK_OFFSET(0x1205D9C0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELMONSTERPHASECHANGE_OFFSET UNITYSDK_OFFSET(0x12062070)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNBEGIN_OFFSET UNITYSDK_OFFSET(0x1205BD90)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNEND_OFFSET UNITYSDK_OFFSET(0x1205C5D0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNSTATEBEFORECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x1205E880)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNULTRASKILLEXECUTINGBEGIN_OFFSET UNITYSDK_OFFSET(0x12061F60)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELUSEABILITY_OFFSET UNITYSDK_OFFSET(0x1205D4C0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELUSESKILL_OFFSET UNITYSDK_OFFSET(0x120603C0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELWAVEMONSTERFINISH_OFFSET UNITYSDK_OFFSET(0x1205E480)
#define RPG_GAMECORE_STATISTICSCOMPONENT__UNINITEVENTS_OFFSET UNITYSDK_OFFSET(0x12052050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatisticsComponent_TypeDefinitionIndex = 58862;

	class StatisticsComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FIDLDJOOPMO*>* _AvatarInitialProperty; // 0x18
		::System::Collections::Generic::List_1<::MKICACCMBOF*>* _actionBarEvents; // 0x20
		::System::Collections::Generic::List_1<::IDEHJPPOIFL*>* _CharacterDeathStt; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KHJJGHDAPFD*>* _AvatarGlobalBuffStt; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* _ReportCustomValues; // 0x38
		::System::Collections::Generic::List_1<::BBDHMCAIGFI*>* _WaveStt; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LAKOGCBIPHB*>* _MonsterStt; // 0x48
		::RPG::GameCore::PVEGameStatistics* _StatisticSnapShot; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GGDFGFCEOGA*>* _BattleEventStt; // 0x58
		::System::Collections::Generic::List_1<::AFGMNFFBBIG*>* _monsterPhaseChangeInfos; // 0x60
		::System::Collections::Generic::List_1<::ABIEGBANPEE*>* _StatisticEvents; // 0x68
		::System::Collections::Generic::List_1<::MNCLBEFPPGB*>* _TurnSttList; // 0x70
		::DIKAEHJFGEE* _FeverTime_k__BackingField; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* _CustomValues; // 0x80
		::Il2CppArray<::System::UInt32>* _totalInsertAbilityTimes; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LLPEHDFMLNJ*>* _ServantStt; // 0x90
		::RPG::GameCore::CharacterSkillCustomStatisticConfig* _SkillStatisticConfig; // 0x98
		::Il2CppArray<::System::UInt32>* _totalSkillUseTimes; // 0xA0
		::System::Collections::Generic::HashSet_1<::System::Int32>* _CustomStringHashSet; // 0xA8
		::System::Collections::Generic::List_1<::System::Int32>* _AvatarTurnBPChain; // 0xB0
		::Il2CppArray<::RPG::GameCore::PVECharacterStt*>* _LightTeamStt; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_3<::FIDLDJOOPMO*, ::System::UInt32, ::System::UInt32>>* _LastTurnAvatarPropertySnapshot; // 0xC0
		::System::Int32 _CharacterDeathSttPendingInex; // 0xC8
		::System::UInt32 _totalBattleTurns; // 0xCC
		::System::UInt32 _totalAutoTurns; // 0xD0
		::System::Single _lastPerformTime; // 0xD4
		::System::UInt32 _totalServantAutoTurns; // 0xD8
		::System::UInt32 _totalMonsterTurns; // 0xDC
		::System::UInt32 _totalAvatarTurns; // 0xE0
		::System::UInt32 _currentLightTeamComboTurnCount; // 0xE4
		::System::Single _turnSkillPerformTime; // 0xE8
		::System::UInt32 _totalServantTurns; // 0xEC
		::System::UInt32 _maxLightTeamComboTurnCount; // 0xF0
		::System::UInt32 _lastSkillConfigID; // 0xF4
		::System::Single _totalSkillPerformTime; // 0xF8
		::System::Single _lastSimulateTime; // 0xFC
		::System::UInt32 _totalBattleRounds; // 0x100
		::System::Boolean _lastIsLightTeamAction; // 0x104
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::PVEGameStatistics* BuildPVEStatistics()
		{
			return ((::RPG::GameCore::PVEGameStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_BUILDPVESTATISTICS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetKilledMonsterWaveIndexListByWave(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETKILLEDMONSTERWAVEINDEXLISTBYWAVE_OFFSET))(this, a1);
		}

		::System::Int32 GetKilledMonsterCount(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETKILLEDMONSTERCOUNT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetTurnTakenDamage(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETTURNTAKENDAMAGE_OFFSET))(this, a1, a2);
		}

		::System::Void RecordAvatarInitialProperty(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_RECORDAVATARINITIALPROPERTY_OFFSET))(this, a1);
		}

		::System::Void AddCustomValue(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_ADDCUSTOMVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void SetReportCustomValue(::System::String* a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_SETREPORTCUSTOMVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerStatisticEvent(::CNCFAGLOBHO a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::CNCFAGLOBHO, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_TRIGGERSTATISTICEVENT_OFFSET))(this, a1, a2);
		}

		::LAKOGCBIPHB* GetMonsterSttFull(::System::UInt32 a1)
		{
			return ((::LAKOGCBIPHB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERSTTFULL_OFFSET))(this, a1);
		}

		static ::System::Boolean _IsMonsterStatLogBlocked(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ISMONSTERSTATLOGBLOCKED_OFFSET))(a1, a2);
		}

		::FCDDPJIEDGP* GetMonsterStt(::System::UInt32 a1)
		{
			return ((::FCDDPJIEDGP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERSTT_OFFSET))(this, a1);
		}

		::CKCDIAAFICJ* GetMonsterPhaseStt(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::CKCDIAAFICJ*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERPHASESTT_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMonsterSttByConfigID(::System::UInt32 a1, ::LAKOGCBIPHB* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::LAKOGCBIPHB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_TRYGETMONSTERSTTBYCONFIGID_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMonsterSttByTemplateID(::System::UInt32 a1, ::LAKOGCBIPHB* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::LAKOGCBIPHB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_TRYGETMONSTERSTTBYTEMPLATEID_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasTriggeredCustomString(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_HASTRIGGEREDCUSTOMSTRING_OFFSET))(this, a1);
		}

		::GGDFGFCEOGA* GetBattleEventStt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::GGDFGFCEOGA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETBATTLEEVENTSTT_OFFSET))(this, a1);
		}

		::LLPEHDFMLNJ* GetServantStt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::LLPEHDFMLNJ*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETSERVANTSTT_OFFSET))(this, a1);
		}

		::RPG::GameCore::PVECharacterStt* GetAvatarSttByAvatarId(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PVECharacterStt*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETAVATARSTTBYAVATARID_OFFSET))(this, a1);
		}

		::OMAHHACEANO* GetCharacterStt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::OMAHHACEANO*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETCHARACTERSTT_OFFSET))(this, a1);
		}

		::KHJJGHDAPFD* GetAvatarGlobalBuffStt(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::KHJJGHDAPFD*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETAVATARGLOBALBUFFSTT_OFFSET))(this, a1, a2);
		}

		::LJAPBLLGAJN* GetSkillUsePropertyByAbilityName(::OMAHHACEANO* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::LJAPBLLGAJN*(*)(::PVOID, ::OMAHHACEANO*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETSKILLUSEPROPERTYBYABILITYNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _InitByStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__INITBYSTAGE_OFFSET))(this);
		}

		::System::Void InitPVEStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_INITPVESTATISTICS_OFFSET))(this);
		}

		::System::Void _InitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__INITEVENTS_OFFSET))(this);
		}

		::System::Void _UninitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__UNINITEVENTS_OFFSET))(this);
		}

		::System::Void _OnLevelTurnBegin(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNBEGIN_OFFSET))(this, a1);
		}

		::System::Void _OnLevelTurnEnd(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNEND_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterCreate(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERCREATE_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterDie(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERDIE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleEventDie(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONBATTLEEVENTDIE_OFFSET))(this, a1);
		}

		::System::Void _OnEntityDie(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONENTITYDIE_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterLimbo(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERLIMBO_OFFSET))(this, a1);
		}

		::System::Void _OnEntityEscape(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONENTITYESCAPE_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterRevive(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERREVIVE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelUseAbility(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELUSEABILITY_OFFSET))(this, a1);
		}

		::System::Void _OnLevelInsertAbility(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELINSERTABILITY_OFFSET))(this, a1);
		}

		::System::Void _OnLevelDispelModifier(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDISPELMODIFIER_OFFSET))(this, a1);
		}

		::System::Void _OnLevelActionCountActive(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELACTIONCOUNTACTIVE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCharacterBreakStateChange(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERBREAKSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCharacterBeforeAddModifier(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERBEFOREADDMODIFIER_OFFSET))(this, a1);
		}

		::System::Void _OnLevelWaveMonsterFinish(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELWAVEMONSTERFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCustomStringEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCUSTOMSTRINGEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnLevelTurnStateBeforeChangeEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNSTATEBEFORECHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnLevelDamageEntity(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDAMAGEENTITY_OFFSET))(this, a1);
		}

		::System::Void _OnLevelDamageEntityPhase1(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDAMAGEENTITYPHASE1_OFFSET))(this, a1);
		}

		::System::Void _OnAbilityAnyHPChange(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONABILITYANYHPCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelHealEntity(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELHEALENTITY_OFFSET))(this, a1);
		}

		::System::Void _OnLevelUseSkill(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELUSESKILL_OFFSET))(this, a1);
		}

		::System::Void _IncrementCountByEntityType(::Il2CppArray<::System::UInt32>* a1, ::RPG::GameCore::EntityType a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__INCREMENTCOUNTBYENTITYTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void _AddSkillPerformTime(::System::Single a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ADDSKILLPERFORMTIME_OFFSET))(this, a1, a2);
		}

		::System::Void _OnLevelEndUseSkill(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENDUSESKILL_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCurrentSPChange(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCURRENTSPCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCurrentBPChange(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCURRENTBPCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelActionDelayChanged(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELACTIONDELAYCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnLevelEntityInitShield(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENTITYINITSHIELD_OFFSET))(this, a1);
		}

		::System::Void _OnLevelEntityShieldChange(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENTITYSHIELDCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelTurnUltraSkillExecutingBegin(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNULTRASKILLEXECUTINGBEGIN_OFFSET))(this, a1);
		}

		::System::Void _OnLevelMonsterPhaseChange(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELMONSTERPHASECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCharacterEndAttack(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERENDATTACK_OFFSET))(this, a1);
		}

		::System::Void _CreateLightTeamPropertySnapshot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__CREATELIGHTTEAMPROPERTYSNAPSHOT_OFFSET))(this);
		}

		::System::Void _FillCharacterSkillEquipAndRelic(::DPMFBDHCNNO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::DPMFBDHCNNO*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__FILLCHARACTERSKILLEQUIPANDRELIC_OFFSET))(this, a1, a2);
		}

		::System::Void _FillAttackAndDamageInfo(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::JEHAOOIJFAG*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>*, ::Google::Protobuf::Collections::RepeatedField_1<::JEHAOOIJFAG*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__FILLATTACKANDDAMAGEINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _BuildActivitySubModeStt(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__BUILDACTIVITYSUBMODESTT_OFFSET))(this, a1);
		}

		::FIDLDJOOPMO* _GetAvatarProperty(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::FIDLDJOOPMO*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__GETAVATARPROPERTY_OFFSET))(this, a1);
		}

		::DIKAEHJFGEE* get_FeverTime()
		{
			return ((::DIKAEHJFGEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GET_FEVERTIME_OFFSET))(this);
		}

		::System::Void set_FeverTime(::DIKAEHJFGEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIKAEHJFGEE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_SET_FEVERTIME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GGDFGFCEOGA*>* get_BattleEventStt()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GGDFGFCEOGA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GET_BATTLEEVENTSTT_OFFSET))(this);
		}

	};
}

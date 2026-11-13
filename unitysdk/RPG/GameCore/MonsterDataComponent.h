#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/CharacterDataComponent.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterViewPhaseType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/HMJGCFJMEAH.h"
class DKNHMEHFNDB;
class EKFMIDBJDIA;
class FODPNNIJCJI;
class HLHIKGINAHB;
class JCAIDCKHNEH;
class KCMGAIFFBPL;
class LDMKDNCFGKL;
class MHJCAPNMMFM;
namespace RPG::GameCore { class CharacterPhaseOverrideConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class MonsterRowData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define RPG_GAMECORE_MONSTERDATACOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x192612D0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1925F0E0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETAISKILLSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1925F2A0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERID_OFFSET UNITYSDK_OFFSET(0x1925EEF0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1925EF80)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1925EFF0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETPHASEMAXHPRATIO_OFFSET UNITYSDK_OFFSET(0x19260E00)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GETPHASEMAXHP_OFFSET UNITYSDK_OFFSET(0x19260900)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CREATEPARAMS_OFFSET UNITYSDK_OFFSET(0x19261050)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTPHASEHPRECOVERED_OFFSET UNITYSDK_OFFSET(0x192604E0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x192604D0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTVIEWPHASE_OFFSET UNITYSDK_OFFSET(0x19261080)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_EXTRALINEUP_OFFSET UNITYSDK_OFFSET(0x19261060)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_HASLIFE_OFFSET UNITYSDK_OFFSET(0x19261030)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_ISMAINMONSTER_OFFSET UNITYSDK_OFFSET(0x19261110)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_ISMUTELASTKILL_OFFSET UNITYSDK_OFFSET(0x19260480)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MAXPHASENUMBER_OFFSET UNITYSDK_OFFSET(0x192604A0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MONSTERROWDATA_OFFSET UNITYSDK_OFFSET(0x19261040)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MULTIACTIONCOUNTER_OFFSET UNITYSDK_OFFSET(0x19261190)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_OVERRIDERANKSCORE_OFFSET UNITYSDK_OFFSET(0x192610F0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_PHASECOUNT_OFFSET UNITYSDK_OFFSET(0x192608A0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_PLURALITYHPMAXLAYER_OFFSET UNITYSDK_OFFSET(0x19261230)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALHP_OFFSET UNITYSDK_OFFSET(0x19260B40)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALLEFTHPRATIO_OFFSET UNITYSDK_OFFSET(0x192604F0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALLEFTHP_OFFSET UNITYSDK_OFFSET(0x19260C30)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_GET_VIEWPHASETYPE_OFFSET UNITYSDK_OFFSET(0x192610E0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_INITBATTLECHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x1925C630)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_MUTELASTKILL_OFFSET UNITYSDK_OFFSET(0x19260430)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_ONABILITYCHARACTERINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1925D550)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SETCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x1925E590)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SETVIEWPHASE_OFFSET UNITYSDK_OFFSET(0x19260DA0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SET_ISMUTELASTKILL_OFFSET UNITYSDK_OFFSET(0x19260490)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SET_OVERRIDERANKSCORE_OFFSET UNITYSDK_OFFSET(0x19261100)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SET_PLURALITYHPMAXLAYER_OFFSET UNITYSDK_OFFSET(0x19261240)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_SET_ROWDATA_OFFSET UNITYSDK_OFFSET(0x192611A0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEENERGYBARSTATE_1_OFFSET UNITYSDK_OFFSET(0x192603B0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEENERGYBARSTATE_OFFSET UNITYSDK_OFFSET(0x19260010)
#define RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEPHASECONFIG_OFFSET UNITYSDK_OFFSET(0x1925F8F0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__INITCOMMONDATAFROMMONSTERROWSADV_OFFSET UNITYSDK_OFFSET(0x1925DD20)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__INITCOMMONDATAFROMMONSTERROWS_OFFSET UNITYSDK_OFFSET(0x1925E7F0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__INITEVENT_OFFSET UNITYSDK_OFFSET(0x1925EDC0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__ONHPCHANGE_OFFSET UNITYSDK_OFFSET(0x1925F3D0)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1925C590)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__ONPREABILITYADD_OFFSET UNITYSDK_OFFSET(0x1925F330)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__SETUPDEFAULTPHASECONFIG_OFFSET UNITYSDK_OFFSET(0x1925D390)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__UNINITEVENT_OFFSET UNITYSDK_OFFSET(0x1925F170)
#define RPG_GAMECORE_MONSTERDATACOMPONENT__UPDATEPHASESTACKPROPERTY_OFFSET UNITYSDK_OFFSET(0x1925F4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterDataComponent_TypeDefinitionIndex = 58870;

	class MonsterDataComponent : public ::RPG::GameCore::CharacterDataComponent
	{
	public:
		::MHJCAPNMMFM* _MultiActionCounter; // 0x140
		::KCMGAIFFBPL* EnergyBarState; // 0x148
		::JCAIDCKHNEH* _CreateParams; // 0x150
		::FODPNNIJCJI* _CustomDataRef; // 0x158
		::RPG::GameCore::MonsterRowData* _MonsterRowData; // 0x160
		::RPG::GameCore::CharacterPhaseOverrideConfig* _DefaultPhaseConfig; // 0x168
		::System::Int32 _PhaseMaxHPStackIndex; // 0x170
		::System::UInt32 _OverrideViewPhase; // 0x174
		::System::UInt32 _CurrentPhase; // 0x178
		::System::Int32 MonsterIndexInWave; // 0x17C
		::System::Int32 _PhaseMaxStanceStackIndex; // 0x180
		::System::Int32 _PluralityHPMaxLayer; // 0x184
		::RPG::GameCore::MonsterViewPhaseType _ViewPhaseType; // 0x188
		::System::Boolean _IsMuteLastKill_k__BackingField; // 0x18C
		::System::Boolean _CurrentPhaseHPRecovered; // 0x18D
		::System::Byte _padding0[0x2];
		::System::Int32 MonsterWave; // 0x190
		::System::Byte _padding1[0x4];
		::RPG::GameCore::FixPoint _DefaultMaxStance; // 0x198
		::System::Nullable_1<::RPG::GameCore::FixPoint> _OverrideRankScore_k__BackingField; // 0x1A0
		::System::Byte _padding2[0x8];
		::RPG::GameCore::FixPoint _DefaultMaxHP; // 0x1B0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void InitBattleCharacterData(::HLHIKGINAHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLHIKGINAHB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_INITBATTLECHARACTERDATA_OFFSET))(this, a1);
		}

		::System::Void OnAbilityCharacterInitialized(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_ONABILITYCHARACTERINITIALIZED_OFFSET))(this, a1);
		}

		::System::Void _InitCommonDataFromMonsterRowsAdv(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Il2CppArray<::RPG::GameCore::MonsterRow*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Il2CppArray<::RPG::GameCore::MonsterRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__INITCOMMONDATAFROMMONSTERROWSADV_OFFSET))(this, a1, a2);
		}

		::System::Void _InitCommonDataFromMonsterRows(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Il2CppArray<::RPG::GameCore::MonsterRow*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Il2CppArray<::RPG::GameCore::MonsterRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__INITCOMMONDATAFROMMONSTERROWS_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetMonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERID_OFFSET))(this);
		}

		::System::UInt32 GetMonsterTemplateID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERTEMPLATEID_OFFSET))(this);
		}

		::System::UInt32 GetMonsterUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETMONSTERUNIQUEID_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::Il2CppArray<::DKNHMEHFNDB*>* GetAISkillSequence()
		{
			return ((::Il2CppArray<::DKNHMEHFNDB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETAISKILLSEQUENCE_OFFSET))(this);
		}

		::System::Void _InitEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__INITEVENT_OFFSET))(this);
		}

		::System::Void _UnInitEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__UNINITEVENT_OFFSET))(this);
		}

		::System::Void _OnPreAbilityAdd(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__ONPREABILITYADD_OFFSET))(this, a1);
		}

		::System::Void _OnHPChange(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__ONHPCHANGE_OFFSET))(this, a1);
		}

		::System::Void _UpdatePhaseStackProperty(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::AbilityProperty a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::DynamicFloat* a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint, ::RPG::GameCore::DynamicFloat*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__UPDATEPHASESTACKPROPERTY_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void UpdatePhaseConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEPHASECONFIG_OFFSET))(this);
		}

		::System::Void _SetupDefaultPhaseConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT__SETUPDEFAULTPHASECONFIG_OFFSET))(this);
		}

		::System::Void UpdateEnergyBarState(::HMJGCFJMEAH a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMJGCFJMEAH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEENERGYBARSTATE_OFFSET))(this, a1);
		}

		::System::Void UpdateEnergyBarState_1(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_UPDATEENERGYBARSTATE_1_OFFSET))(this, a1);
		}

		::System::Void MuteLastKill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_MUTELASTKILL_OFFSET))(this);
		}

		::System::Boolean get_IsMuteLastKill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_ISMUTELASTKILL_OFFSET))(this);
		}

		::System::Void set_IsMuteLastKill(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_SET_ISMUTELASTKILL_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxPhaseNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MAXPHASENUMBER_OFFSET))(this);
		}

		::System::UInt32 get_CurrentPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTPHASE_OFFSET))(this);
		}

		::System::Boolean get_CurrentPhaseHPRecovered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTPHASEHPRECOVERED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_TotalLeftHPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALLEFTHPRATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_TotalHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_TotalLeftHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_TOTALLEFTHP_OFFSET))(this);
		}

		::System::Void SetCurrentPhase(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_SETCURRENTPHASE_OFFSET))(this, a1, a2);
		}

		::System::Void SetViewPhase(::System::UInt32 a1, ::RPG::GameCore::MonsterViewPhaseType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::MonsterViewPhaseType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_SETVIEWPHASE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint GetPhaseMaxHP(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETPHASEMAXHP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetPhaseMaxHPRatio(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GETPHASEMAXHPRATIO_OFFSET))(this, a1);
		}

		::System::Boolean get_HasLife()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_HASLIFE_OFFSET))(this);
		}

		::RPG::GameCore::MonsterRowData* get_MonsterRowData()
		{
			return ((::RPG::GameCore::MonsterRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MONSTERROWDATA_OFFSET))(this);
		}

		::JCAIDCKHNEH* get_CreateParams()
		{
			return ((::JCAIDCKHNEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CREATEPARAMS_OFFSET))(this);
		}

		::LDMKDNCFGKL* get_ExtraLineup()
		{
			return ((::LDMKDNCFGKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_EXTRALINEUP_OFFSET))(this);
		}

		::System::Int32 get_PhaseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_PHASECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_CurrentViewPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_CURRENTVIEWPHASE_OFFSET))(this);
		}

		::RPG::GameCore::MonsterViewPhaseType get_ViewPhaseType()
		{
			return ((::RPG::GameCore::MonsterViewPhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_VIEWPHASETYPE_OFFSET))(this);
		}

		::System::Nullable_1<::RPG::GameCore::FixPoint> get_OverrideRankScore()
		{
			return ((::System::Nullable_1<::RPG::GameCore::FixPoint>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_OVERRIDERANKSCORE_OFFSET))(this);
		}

		::System::Void set_OverrideRankScore(::System::Nullable_1<::RPG::GameCore::FixPoint> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_SET_OVERRIDERANKSCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMainMonster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_ISMAINMONSTER_OFFSET))(this);
		}

		::MHJCAPNMMFM* get_MultiActionCounter()
		{
			return ((::MHJCAPNMMFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_MULTIACTIONCOUNTER_OFFSET))(this);
		}

		::System::Void set_RowData(::RPG::GameCore::ICharacterRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_SET_ROWDATA_OFFSET))(this, a1);
		}

		::System::Int32 get_PluralityHPMaxLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_GET_PLURALITYHPMAXLAYER_OFFSET))(this);
		}

		::System::Void set_PluralityHPMaxLayer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDATACOMPONENT_SET_PLURALITYHPMAXLAYER_OFFSET))(this, a1);
		}

	};
}

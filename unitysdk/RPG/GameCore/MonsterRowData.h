#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOFBIDPBMI.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IDMGKNGKLDH.h"
class BJMFOPNJPHE;
class CDBPIOPBHID;
class ENEIHJJPNPI;
class JCAIDCKHNEH;
class LDMKDNCFGKL;
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class EliteGroupRow; }
namespace RPG::GameCore { class GridFightEnemyDifficultyLvConfigRow; }
namespace RPG::GameCore { class HardLevelGroupRow; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class MonsterSkillRow; }
namespace RPG::GameCore { class MonsterTemplateRow; }
namespace RPG::GameCore { class StageRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_MONSTERROWDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1925CD10)
#define RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0x19264740)
#define RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0x192646C0)
#define RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x19264670)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x19264260)
#define RPG_GAMECORE_MONSTERROWDATA_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0x19262F80)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ALLPHASESKILLS_OFFSET UNITYSDK_OFFSET(0x19263040)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0x19263830)
#define RPG_GAMECORE_MONSTERROWDATA_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x19264350)
#define RPG_GAMECORE_MONSTERROWDATA_GET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0x19263E00)
#define RPG_GAMECORE_MONSTERROWDATA_GET_BASEMONSTERROW_OFFSET UNITYSDK_OFFSET(0x19262E40)
#define RPG_GAMECORE_MONSTERROWDATA_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x19263F60)
#define RPG_GAMECORE_MONSTERROWDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1925EF60)
#define RPG_GAMECORE_MONSTERROWDATA_GET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x19263DA0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0x19263DC0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0x19264530)
#define RPG_GAMECORE_MONSTERROWDATA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x19264510)
#define RPG_GAMECORE_MONSTERROWDATA_GET_DEFENCE_OFFSET UNITYSDK_OFFSET(0x19263960)
#define RPG_GAMECORE_MONSTERROWDATA_GET_DIFFICULTYDAMAGEREDUCERATIO_OFFSET UNITYSDK_OFFSET(0x19263EF0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ELITEGROUP2ROW_OFFSET UNITYSDK_OFFSET(0x19262E70)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ELITEGROUPROW_OFFSET UNITYSDK_OFFSET(0x19262E60)
#define RPG_GAMECORE_MONSTERROWDATA_GET_EXTRAHPRATIO_OFFSET UNITYSDK_OFFSET(0x19263070)
#define RPG_GAMECORE_MONSTERROWDATA_GET_EXTRALINEUP_OFFSET UNITYSDK_OFFSET(0x19262E80)
#define RPG_GAMECORE_MONSTERROWDATA_GET_HARDLEVELROW_OFFSET UNITYSDK_OFFSET(0x19262E50)
#define RPG_GAMECORE_MONSTERROWDATA_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0x19264590)
#define RPG_GAMECORE_MONSTERROWDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x19264140)
#define RPG_GAMECORE_MONSTERROWDATA_GET_INITACTIONDELAYRATIO_OFFSET UNITYSDK_OFFSET(0x19263ED0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_INITHP_OFFSET UNITYSDK_OFFSET(0x192632D0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_INITSTANCE_OFFSET UNITYSDK_OFFSET(0x19263D40)
#define RPG_GAMECORE_MONSTERROWDATA_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0x19264000)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ISAETHERDIVIDE_OFFSET UNITYSDK_OFFSET(0x19263150)
#define RPG_GAMECORE_MONSTERROWDATA_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x19262F60)
#define RPG_GAMECORE_MONSTERROWDATA_GET_JSON_OFFSET UNITYSDK_OFFSET(0x19262F50)
#define RPG_GAMECORE_MONSTERROWDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19263010)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MANIKINIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19264200)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x19263160)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MAXSTANCE_OFFSET UNITYSDK_OFFSET(0x19263BE0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0x19263DE0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x19263F50)
#define RPG_GAMECORE_MONSTERROWDATA_GET_MONSTERROW_OFFSET UNITYSDK_OFFSET(0x19262E20)
#define RPG_GAMECORE_MONSTERROWDATA_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x192644F0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_OVERRIDEAIPATHS_OFFSET UNITYSDK_OFFSET(0x19263000)
#define RPG_GAMECORE_MONSTERROWDATA_GET_PHASEHIDESKILLS_OFFSET UNITYSDK_OFFSET(0x19263050)
#define RPG_GAMECORE_MONSTERROWDATA_GET_RESISTANCE_OFFSET UNITYSDK_OFFSET(0x19263E40)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x192641A0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x19262E90)
#define RPG_GAMECORE_MONSTERROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x192642B0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0x19263030)
#define RPG_GAMECORE_MONSTERROWDATA_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x19263A90)
#define RPG_GAMECORE_MONSTERROWDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x19264550)
#define RPG_GAMECORE_MONSTERROWDATA_GET_STANCECOUNT_OFFSET UNITYSDK_OFFSET(0x192645A0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_STANCEWEAKLIST_OFFSET UNITYSDK_OFFSET(0x1925E530)
#define RPG_GAMECORE_MONSTERROWDATA_GET_STATUSPROBABILITY_OFFSET UNITYSDK_OFFSET(0x19263EB0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_STRATEGIES_OFFSET UNITYSDK_OFFSET(0x192640B0)
#define RPG_GAMECORE_MONSTERROWDATA_GET_TEMPLATEROW_OFFSET UNITYSDK_OFFSET(0x19262E30)
#define RPG_GAMECORE_MONSTERROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x19264300)
#define RPG_GAMECORE_MONSTERROWDATA_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0x19264610)
#define RPG_GAMECORE_MONSTERROWDATA_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0x192643A0)
#define RPG_GAMECORE_MONSTERROWDATA_OVERRIDESTRATEGIES_OFFSET UNITYSDK_OFFSET(0x192644A0)
#define RPG_GAMECORE_MONSTERROWDATA_SETCUSTOMDYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0x1925D340)
#define RPG_GAMECORE_MONSTERROWDATA_SET_PHASEHIDESKILLS_OFFSET UNITYSDK_OFFSET(0x19263060)
#define RPG_GAMECORE_MONSTERROWDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x19262EA0)
#define RPG_GAMECORE_MONSTERROWDATA__GETMONSTERCUSTOMDYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0x192612F0)
#define RPG_GAMECORE_MONSTERROWDATA__SETUPSKILLLIST_OFFSET UNITYSDK_OFFSET(0x19261370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterRowData_TypeDefinitionIndex = 58158;

	class MonsterRowData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* _SkillRowDatas; // 0x10
		::CDBPIOPBHID* _AllPhaseSkills; // 0x18
		::RPG::GameCore::CharacterConfig* _Json; // 0x20
		::RPG::GameCore::MonsterTemplateRow* _TemplateRow; // 0x28
		::LDMKDNCFGKL* _ExtraLineup; // 0x30
		::Il2CppArray<::RPG::Client::TextID>* _OverrideStrategies; // 0x38
		::System::String* _modelPath; // 0x40
		::BJMFOPNJPHE* _PhaseHideSkills_k__BackingField; // 0x48
		::RPG::GameCore::MonsterRow* _Row; // 0x50
		::RPG::GameCore::HardLevelGroupRow* _HardLevelRow; // 0x58
		::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* _DifficultyLvRow; // 0x60
		::RPG::GameCore::EliteGroupRow* _EliteGroupRow; // 0x68
		::PIOFBIDPBMI _OverrideDisplay; // 0x70
		::RPG::GameCore::MonsterRow* _BaseMonsterRow; // 0xD8
		::ENEIHJJPNPI* _MonsterCustomDynamicValues; // 0xE0
		::RPG::GameCore::EliteGroupRow* _EliteGroup3Row; // 0xE8
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _OverrideStanceWeakList; // 0xF0
		::RPG::GameCore::EliteGroupRow* _EliteGroup2Row; // 0xF8
		::RPG::GameCore::FixPoint _InitHP; // 0x100
		::RPG::GameCore::FixPoint _MaxHP; // 0x108
		::System::Nullable_1<::RPG::GameCore::FixPoint> _MaxStance; // 0x110
		::System::Byte _padding0[0x8];
		::System::Nullable_1<::RPG::GameCore::FixPoint> _InitStance; // 0x120
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonsterSkillRow*>** StaticGet__TmpSkillRowMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonsterSkillRow*>**)UnitySDK::FromName("RPG.GameCore", "MonsterRowData")->GetStaticField(0x71C90);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::MonsterSkillRow*>** StaticGet__TmpSkillRowList()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::MonsterSkillRow*>**)UnitySDK::FromName("RPG.GameCore", "MonsterRowData")->GetStaticField(0x71C98);
		}

		::System::Void _ctor(::RPG::GameCore::MonsterRow* a1, ::JCAIDCKHNEH* a2, ::RPG::GameCore::StageRow* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterRow*, ::JCAIDCKHNEH*, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::ENEIHJJPNPI* _GetMonsterCustomDynamicValues()
		{
			return ((::ENEIHJJPNPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA__GETMONSTERCUSTOMDYNAMICVALUES_OFFSET))(this);
		}

		::RPG::GameCore::MonsterRow* get_MonsterRow()
		{
			return ((::RPG::GameCore::MonsterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MONSTERROW_OFFSET))(this);
		}

		::RPG::GameCore::MonsterTemplateRow* get_TemplateRow()
		{
			return ((::RPG::GameCore::MonsterTemplateRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_TEMPLATEROW_OFFSET))(this);
		}

		::RPG::GameCore::MonsterRow* get_BaseMonsterRow()
		{
			return ((::RPG::GameCore::MonsterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_BASEMONSTERROW_OFFSET))(this);
		}

		::RPG::GameCore::HardLevelGroupRow* get_HardLevelRow()
		{
			return ((::RPG::GameCore::HardLevelGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_HARDLEVELROW_OFFSET))(this);
		}

		::RPG::GameCore::EliteGroupRow* get_EliteGroupRow()
		{
			return ((::RPG::GameCore::EliteGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ELITEGROUPROW_OFFSET))(this);
		}

		::RPG::GameCore::EliteGroupRow* get_EliteGroup2Row()
		{
			return ((::RPG::GameCore::EliteGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ELITEGROUP2ROW_OFFSET))(this);
		}

		::LDMKDNCFGKL* get_ExtraLineup()
		{
			return ((::LDMKDNCFGKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_EXTRALINEUP_OFFSET))(this);
		}

		::System::Object* get_Row()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterConfig* get_Json()
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_JSON_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_JSONPATH_OFFSET))(this);
		}

		::System::String* get_AIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_AIPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_OverrideAIPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_OVERRIDEAIPATHS_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_SKILLROWDATAS_OFFSET))(this);
		}

		::CDBPIOPBHID* get_AllPhaseSkills()
		{
			return ((::CDBPIOPBHID*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ALLPHASESKILLS_OFFSET))(this);
		}

		::BJMFOPNJPHE* get_PhaseHideSkills()
		{
			return ((::BJMFOPNJPHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_PHASEHIDESKILLS_OFFSET))(this);
		}

		::System::Void set_PhaseHideSkills(::BJMFOPNJPHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJMFOPNJPHE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_SET_PHASEHIDESKILLS_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_ExtraHPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_EXTRAHPRATIO_OFFSET))(this);
		}

		::System::Boolean get_IsAetherDivide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ISAETHERDIVIDE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MAXHP_OFFSET))(this);
		}

		::System::Void SetCustomDynamicValues(::ENEIHJJPNPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENEIHJJPNPI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_SETCUSTOMDYNAMICVALUES_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_InitHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_INITHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Attack()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ATTACK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Defence()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_DEFENCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Speed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_SPEED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxStance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MAXSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitStance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_INITSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalChance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_CRITICALCHANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_CRITICALDAMAGE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MinimumFatigueRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BaseAggro()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_BASEAGGRO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Resistance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_RESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_StatusProbability()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_STATUSPROBABILITY_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitActionDelayRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_INITACTIONDELAYRATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_DifficultyDamageReduceRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_DIFFICULTYDAMAGEREDUCERATIO_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MODELPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Introduction()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_INTRODUCTION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::TextID>* get_Strategies()
		{
			return ((::Il2CppArray<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_STRATEGIES_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_ManikinImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_MANIKINIMAGEPATH_OFFSET))(this);
		}

		::System::String* get_ActionIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_ACTIONICONPATH_OFFSET))(this);
		}

		::System::String* get_SideAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_WaitingAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_AvatarSideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_AVATARSIDEICONPATH_OFFSET))(this);
		}

		::System::Void OverrideDisplay(::PIOFBIDPBMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOFBIDPBMI))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_OVERRIDEDISPLAY_OFFSET))(this, a1);
		}

		::System::Void OverrideStrategies(::Il2CppArray<::RPG::Client::TextID>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_OVERRIDESTRATEGIES_OFFSET))(this, a1);
		}

		::System::UInt32 get_NatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_NATUREID_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_DAMAGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_StanceWeakList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_STANCEWEAKLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
		{
			return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_SPNEED_OFFSET))(this);
		}

		::System::Boolean get_HaveActionDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_HAVEACTIONDELAY_OFFSET))(this);
		}

		::System::Int32 get_StanceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GET_STANCECOUNT_OFFSET))(this);
		}

		::System::Void OverrideData(::IDMGKNGKLDH a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDMGKNGKLDH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_OVERRIDEDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATABYNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA_GETSKILLROWDATABYID_OFFSET))(this, a1);
		}

		static ::System::Void _SetupSkillList(::RPG::GameCore::MonsterRow* a1, ::RPG::GameCore::CharacterConfig* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterRow*, ::RPG::GameCore::CharacterConfig*, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROWDATA__SETUPSKILLLIST_OFFSET))(a1, a2, a3);
		}

	};
}

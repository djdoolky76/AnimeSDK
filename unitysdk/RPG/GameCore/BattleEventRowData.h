#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDMGKNGKLDH.h"
#include "unitysdk/PIOFBIDPBMI.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class FNGAIKFIAAE;
namespace RPG::GameCore { class BattleEventConfig; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class BattleEventSkillRow; }
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightAvatarRow_AvatarCommonRowWrap; }
namespace RPG::GameCore { class GridFightRoleBackendExtraRankConfigRow; }
namespace RPG::GameCore { class GridFightRoleBackendRankConfigRow; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class StageRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEEVENTROWDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xF03B8F0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GETEXTRARANKCONFIGROWBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0xF040BC0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GETOVERRIDEPROPERTY_OFFSET UNITYSDK_OFFSET(0xF03EEC0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GETRANKCONFIGROWBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0xF040B00)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0xF040780)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0xF040720)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0xF0406C0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0xF040340)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ACTIVEBACKENDEXTRARANKLIST_OFFSET UNITYSDK_OFFSET(0xF040C90)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ACTIVEBACKENDRANKLIST_OFFSET UNITYSDK_OFFSET(0xF040C80)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0xF03FAF0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0xF03FC20)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0xF040430)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0xF03FEC0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BATTLEEVENTJSON_OFFSET UNITYSDK_OFFSET(0xF03F9B0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BATTLEEVENTROW_OFFSET UNITYSDK_OFFSET(0xF03F990)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0xF03F9C0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xF040100)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xF03FA60)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0xF03FDD0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0xF03FE20)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0xF0404F0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xF040480)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_DEFENCE_OFFSET UNITYSDK_OFFSET(0xF03FC70)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0xF040550)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xF040290)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_INITACTIONDELAYRATIO_OFFSET UNITYSDK_OFFSET(0xF040000)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_INITHP_OFFSET UNITYSDK_OFFSET(0xF03FBD0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0xF0401E0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0xF03FA80)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_JSON_OFFSET UNITYSDK_OFFSET(0xF03F9A0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xF03FB60)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xF03FB80)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MAXSTANCE_OFFSET UNITYSDK_OFFSET(0xF03FF10)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0xF03FE70)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xF040050)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0xF040470)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_OVERRIDEAIPATHS_OFFSET UNITYSDK_OFFSET(0xF03FB50)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_RESISTANCE_OFFSET UNITYSDK_OFFSET(0xF03FF60)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xF040300)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xF03F930)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xF0403B0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0xF03FB70)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xF03FCC0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0xF040500)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_STATUSPROBABILITY_OFFSET UNITYSDK_OFFSET(0xF03FFB0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xF0403F0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0xF0405B0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0xF03C4E0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xF03F940)
#define RPG_GAMECORE_BATTLEEVENTROWDATA__COLLECTACTIVEBACKENDEXTRARANK_OFFSET UNITYSDK_OFFSET(0xF0408C0)
#define RPG_GAMECORE_BATTLEEVENTROWDATA__SETUPACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xF03EF80)
#define RPG_GAMECORE_BATTLEEVENTROWDATA__SETUPSKILLLIST_OFFSET UNITYSDK_OFFSET(0xF03F370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventRowData_TypeDefinitionIndex = 58157;

	class BattleEventRowData : public ::System::Object
	{
	public:
		::System::String* _OverrideModelPath; // 0x10
		::PIOFBIDPBMI _OverrideDisplay; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow*>* _ActiveBackendExtraRankList; // 0x80
		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendRankConfigRow*>* _ActiveBackendRankList; // 0x88
		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* _SkillRowDatas; // 0x90
		::RPG::GameCore::BattleEventConfig* _Json; // 0x98
		::RPG::GameCore::BattleEventRow* _Row; // 0xA0
		::IDMGKNGKLDH _OverrideData; // 0xA8
		::System::UInt32 _Level; // 0xC0
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BattleEventSkillRow*>** StaticGet__TmpSkillRowMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BattleEventSkillRow*>**)UnitySDK::FromName("RPG.GameCore", "BattleEventRowData")->GetStaticField(0x67290);
		}

		::System::Void _ctor(::RPG::GameCore::BattleEventRow* a1, ::RPG::GameCore::BattleEventConfig* a2, ::FNGAIKFIAAE* a3, ::RPG::GameCore::StageRow* a4, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventRow*, ::RPG::GameCore::BattleEventConfig*, ::FNGAIKFIAAE*, ::RPG::GameCore::StageRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Object* get_Row()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleEventRow* get_BattleEventRow()
		{
			return ((::RPG::GameCore::BattleEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BATTLEEVENTROW_OFFSET))(this);
		}

		::RPG::GameCore::CharacterConfig* get_Json()
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_JSON_OFFSET))(this);
		}

		::RPG::GameCore::BattleEventConfig* get_BattleEventJson()
		{
			return ((::RPG::GameCore::BattleEventConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BATTLEEVENTJSON_OFFSET))(this);
		}

		::System::UInt32 get_BelongAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BELONGAVATARID_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_JSONPATH_OFFSET))(this);
		}

		::System::String* get_AIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_AIPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_OverrideAIPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_OVERRIDEAIPATHS_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SKILLROWDATAS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MAXHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_INITHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Attack()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ATTACK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Defence()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_DEFENCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Speed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SPEED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalChance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CRITICALCHANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CRITICALDAMAGE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MinimumFatigueRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BaseAggro()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_BASEAGGRO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxStance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MAXSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Resistance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_RESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_StatusProbability()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_STATUSPROBABILITY_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitActionDelayRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_INITACTIONDELAYRATIO_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_MODELPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Introduction()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_INTRODUCTION_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_ActionIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ACTIONICONPATH_OFFSET))(this);
		}

		::System::String* get_SideAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_WaitingAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_AvatarSideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_AVATARSIDEICONPATH_OFFSET))(this);
		}

		::System::Void OverrideDisplay(::PIOFBIDPBMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOFBIDPBMI))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_OVERRIDEDISPLAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_NatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_NATUREID_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_DAMAGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
		{
			return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_SPNEED_OFFSET))(this);
		}

		::System::Boolean get_HaveActionDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_HAVEACTIONDELAY_OFFSET))(this);
		}

		::System::Void OverrideData(::IDMGKNGKLDH a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDMGKNGKLDH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_OVERRIDEDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATABYNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GETSKILLROWDATABYID_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetOverrideProperty(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GETOVERRIDEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupSkillList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA__SETUPSKILLLIST_OFFSET))(this, a1);
		}

		::System::Void _SetupActivityData(::FNGAIKFIAAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNGAIKFIAAE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA__SETUPACTIVITYDATA_OFFSET))(this, a1);
		}

		::System::Void _CollectActiveBackendExtraRank(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GridFightAvatarRow_AvatarCommonRowWrap* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GridFightAvatarRow_AvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA__COLLECTACTIVEBACKENDEXTRARANK_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GridFightRoleBackendRankConfigRow* GetRankConfigRowByTriggerKey(::RPG::GameCore::StringHash a1)
		{
			return ((::RPG::GameCore::GridFightRoleBackendRankConfigRow*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GETRANKCONFIGROWBYTRIGGERKEY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow* GetExtraRankConfigRowByTriggerKey(::RPG::GameCore::StringHash a1)
		{
			return ((::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GETEXTRARANKCONFIGROWBYTRIGGERKEY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendRankConfigRow*>* get_ActiveBackendRankList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendRankConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ACTIVEBACKENDRANKLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow*>* get_ActiveBackendExtraRankList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROWDATA_GET_ACTIVEBACKENDEXTRARANKLIST_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDMGKNGKLDH.h"
#include "unitysdk/PIOFBIDPBMI.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class CCLCHEGGNOF;
class EIBJGIEGOML;
class POLOFKBIIKB;
namespace RPG::GameCore { class AvatarRankConfigRow; }
namespace RPG::GameCore { class AvatarServantSkillRow; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class IAvatarServantRowWrap; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class ServantConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_SERVANTROWDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1202EC30)
#define RPG_GAMECORE_SERVANTROWDATA_GETEXRANKCONFIGROWBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x12033B30)
#define RPG_GAMECORE_SERVANTROWDATA_GETEXRANKROWMAP_OFFSET UNITYSDK_OFFSET(0x120332D0)
#define RPG_GAMECORE_SERVANTROWDATA_GETRANKCONFIGROWBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x120339C0)
#define RPG_GAMECORE_SERVANTROWDATA_GETRANKROWMAP_OFFSET UNITYSDK_OFFSET(0x12033170)
#define RPG_GAMECORE_SERVANTROWDATA_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0x12032E60)
#define RPG_GAMECORE_SERVANTROWDATA_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0x12032E10)
#define RPG_GAMECORE_SERVANTROWDATA_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x12032DC0)
#define RPG_GAMECORE_SERVANTROWDATA_GETSKILLTREELEVELMAP_OFFSET UNITYSDK_OFFSET(0x12033590)
#define RPG_GAMECORE_SERVANTROWDATA_GETSKILLTREEPROPERTYMAP_OFFSET UNITYSDK_OFFSET(0x120336F0)
#define RPG_GAMECORE_SERVANTROWDATA_GETSKILLTREEROWBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x12033850)
#define RPG_GAMECORE_SERVANTROWDATA_GETSKILLTREEROWMAP_OFFSET UNITYSDK_OFFSET(0x12033430)
#define RPG_GAMECORE_SERVANTROWDATA_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x120325D0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0x120307C0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0x12030EE0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_AVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0x12030380)
#define RPG_GAMECORE_SERVANTROWDATA_GET_AVATARSERVANTROW_OFFSET UNITYSDK_OFFSET(0x12030530)
#define RPG_GAMECORE_SERVANTROWDATA_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x12032960)
#define RPG_GAMECORE_SERVANTROWDATA_GET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0x12031A60)
#define RPG_GAMECORE_SERVANTROWDATA_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x12032130)
#define RPG_GAMECORE_SERVANTROWDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x12030560)
#define RPG_GAMECORE_SERVANTROWDATA_GET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x12031640)
#define RPG_GAMECORE_SERVANTROWDATA_GET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0x120317A0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0x12032C50)
#define RPG_GAMECORE_SERVANTROWDATA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x12032BE0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_DEFENCE_OFFSET UNITYSDK_OFFSET(0x12031040)
#define RPG_GAMECORE_SERVANTROWDATA_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0x12032CA0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x12032370)
#define RPG_GAMECORE_SERVANTROWDATA_GET_INITACTIONDELAYRATIO_OFFSET UNITYSDK_OFFSET(0x12031FB0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_INITHP_OFFSET UNITYSDK_OFFSET(0x12030ED0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0x120322C0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x12030690)
#define RPG_GAMECORE_SERVANTROWDATA_GET_JSON_OFFSET UNITYSDK_OFFSET(0x12030540)
#define RPG_GAMECORE_SERVANTROWDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x12030A10)
#define RPG_GAMECORE_SERVANTROWDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x12030A30)
#define RPG_GAMECORE_SERVANTROWDATA_GET_MAXSTANCE_OFFSET UNITYSDK_OFFSET(0x12031B90)
#define RPG_GAMECORE_SERVANTROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0x12031900)
#define RPG_GAMECORE_SERVANTROWDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x12032000)
#define RPG_GAMECORE_SERVANTROWDATA_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x12032BD0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_OVERRIDEAIPATHS_OFFSET UNITYSDK_OFFSET(0x120308F0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x12033010)
#define RPG_GAMECORE_SERVANTROWDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x12032EB0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x12030430)
#define RPG_GAMECORE_SERVANTROWDATA_GET_RESISTANCE_OFFSET UNITYSDK_OFFSET(0x12031CF0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x120324A0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x120304C0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_SERVANTJSON_OFFSET UNITYSDK_OFFSET(0x12030550)
#define RPG_GAMECORE_SERVANTROWDATA_GET_SERVANTMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x120329A0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x12032700)
#define RPG_GAMECORE_SERVANTROWDATA_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0x12030A20)
#define RPG_GAMECORE_SERVANTROWDATA_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x120311A0)
#define RPG_GAMECORE_SERVANTROWDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x12032C60)
#define RPG_GAMECORE_SERVANTROWDATA_GET_STATUSPROBABILITY_OFFSET UNITYSDK_OFFSET(0x12031E50)
#define RPG_GAMECORE_SERVANTROWDATA_GET_SUMMONERROWDATA_OFFSET UNITYSDK_OFFSET(0x12030370)
#define RPG_GAMECORE_SERVANTROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x12032830)
#define RPG_GAMECORE_SERVANTROWDATA_INITFROMCREATEPARAMS_OFFSET UNITYSDK_OFFSET(0x1202EC40)
#define RPG_GAMECORE_SERVANTROWDATA_INITFROMSERVANTDATA_OFFSET UNITYSDK_OFFSET(0x1202FC90)
#define RPG_GAMECORE_SERVANTROWDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1202F610)
#define RPG_GAMECORE_SERVANTROWDATA_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0x12032CB0)
#define RPG_GAMECORE_SERVANTROWDATA_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0x12032AD0)
#define RPG_GAMECORE_SERVANTROWDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x120304D0)
#define RPG_GAMECORE_SERVANTROWDATA__INITDATA_OFFSET UNITYSDK_OFFSET(0x1202F680)
#define RPG_GAMECORE_SERVANTROWDATA__SETUPSKILLLIST_OFFSET UNITYSDK_OFFSET(0x1202FD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantRowData_TypeDefinitionIndex = 58163;

	class ServantRowData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* _SkillRowDatas; // 0x10
		::POLOFKBIIKB* _Row; // 0x18
		::RPG::GameCore::ServantConfig* _Json; // 0x20
		::PIOFBIDPBMI _OverrideDisplay; // 0x28
		::RPG::GameCore::ICharacterRowData* _SummonerRowData; // 0x90
		::IDMGKNGKLDH _OverrideData; // 0x98
		::System::UInt32 _Level; // 0xB0
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AvatarServantSkillRow*>** StaticGet__TmpSkillRowMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AvatarServantSkillRow*>**)UnitySDK::FromName("RPG.GameCore", "ServantRowData")->GetStaticField(0x729F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::UInt32 a1, ::RPG::GameCore::ServantConfig* a2, ::RPG::GameCore::ICharacterRowData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ServantConfig*, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitFromServantData(::System::UInt32 a1, ::RPG::GameCore::CharacterConfig* a2, ::RPG::GameCore::ICharacterRowData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CharacterConfig*, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_INITFROMSERVANTDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitFromCreateParams(::CCLCHEGGNOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCLCHEGGNOF*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_INITFROMCREATEPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitData(::System::UInt32 a1, ::RPG::GameCore::CharacterConfig* a2, ::RPG::GameCore::ICharacterRowData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CharacterConfig*, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA__INITDATA_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::ICharacterRowData* get_SummonerRowData()
		{
			return ((::RPG::GameCore::ICharacterRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_SUMMONERROWDATA_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseType get_AvatarBaseType()
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_AVATARBASETYPE_OFFSET))(this);
		}

		::RPG::GameCore::CombatPowerAvatarRarityType get_Rarity()
		{
			return ((::RPG::GameCore::CombatPowerAvatarRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_RARITY_OFFSET))(this);
		}

		::System::Object* get_Row()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::IAvatarServantRowWrap* get_AvatarServantRow()
		{
			return ((::RPG::GameCore::IAvatarServantRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_AVATARSERVANTROW_OFFSET))(this);
		}

		::RPG::GameCore::CharacterConfig* get_Json()
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_JSON_OFFSET))(this);
		}

		::RPG::GameCore::ServantConfig* get_ServantJson()
		{
			return ((::RPG::GameCore::ServantConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_SERVANTJSON_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_JSONPATH_OFFSET))(this);
		}

		::System::String* get_AIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_AIPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_OverrideAIPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_OVERRIDEAIPATHS_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_SKILLROWDATAS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_MAXHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_INITHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Attack()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_ATTACK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Defence()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_DEFENCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Speed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_SPEED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalChance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_CRITICALCHANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_CRITICALDAMAGE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MinimumFatigueRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BaseAggro()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_BASEAGGRO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxStance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_MAXSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Resistance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_RESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_StatusProbability()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_STATUSPROBABILITY_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitActionDelayRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_INITACTIONDELAYRATIO_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_MODELPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Introduction()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_INTRODUCTION_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_ActionIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_ACTIONICONPATH_OFFSET))(this);
		}

		::System::String* get_SideAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_WaitingAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_AvatarSideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_AVATARSIDEICONPATH_OFFSET))(this);
		}

		::System::String* get_ServantMiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_SERVANTMINIICONPATH_OFFSET))(this);
		}

		::System::Void OverrideDisplay(::PIOFBIDPBMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOFBIDPBMI))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_OVERRIDEDISPLAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_NatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_NATUREID_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_DAMAGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
		{
			return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_SPNEED_OFFSET))(this);
		}

		::System::Boolean get_HaveActionDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_HAVEACTIONDELAY_OFFSET))(this);
		}

		::System::Void OverrideData(::IDMGKNGKLDH a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDMGKNGKLDH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_OVERRIDEDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETSKILLROWDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETSKILLROWDATABYNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETSKILLROWDATABYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_RANK_OFFSET))(this);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GET_PROMOTION_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::AvatarRankConfigRow*>* GetRankRowMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::AvatarRankConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETRANKROWMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::EIBJGIEGOML*>* GetExRankRowMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::EIBJGIEGOML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETEXRANKROWMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarSkillTreeRow*>* GetSkillTreeRowMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarSkillTreeRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETSKILLTREEROWMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* GetSkillTreeLevelMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETSKILLTREELEVELMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* GetSkillTreePropertyMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETSKILLTREEPROPERTYMAP_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSkillTreeRow* GetSkillTreeRowByTriggerKey(::RPG::GameCore::AvatarSkillTreePointTriggerKey a1)
		{
			return ((::RPG::GameCore::AvatarSkillTreeRow*(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreePointTriggerKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETSKILLTREEROWBYTRIGGERKEY_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarRankConfigRow* GetRankConfigRowByTriggerKey(::RPG::GameCore::StringHash a1)
		{
			return ((::RPG::GameCore::AvatarRankConfigRow*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETRANKCONFIGROWBYTRIGGERKEY_OFFSET))(this, a1);
		}

		::EIBJGIEGOML* GetExRankConfigRowByTriggerKey(::RPG::GameCore::StringHash a1)
		{
			return ((::EIBJGIEGOML*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA_GETEXRANKCONFIGROWBYTRIGGERKEY_OFFSET))(this, a1);
		}

		::System::Void _SetupSkillList(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTROWDATA__SETUPSKILLLIST_OFFSET))(this, a1, a2);
		}

	};
}

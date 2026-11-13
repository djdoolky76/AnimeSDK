#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDMGKNGKLDH.h"
#include "unitysdk/OECEIBFKDGD.h"
#include "unitysdk/PIOFBIDPBMI.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeMask.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/AvatarRowWrapperDeriveType.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class ADILGMDJEJF;
class AGGHHCLPALK;
class DLIBCMNBLGF;
class EIBJGIEGOML;
class EOOCGPJPHEI;
class JGGNIOIBDBC;
class NMBMHCNGCFG;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class AvatarBaseTypeCollection; }
namespace RPG::GameCore { class AvatarRankConfigRow; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace RPG::GameCore { class AvatarUltraSkillConfigRow; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ENpcE07Config; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace RPG::GameCore { class IAvatarPromotionCommonRowWrap; }
namespace RPG::GameCore { class IAvatarSkillCommonRowWrap; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class ServantRowData; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AVATARROWDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A011390)
#define RPG_GAMECORE_AVATARROWDATA_CHECKHASEXRANK_OFFSET UNITYSDK_OFFSET(0x1A00EB40)
#define RPG_GAMECORE_AVATARROWDATA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A00AF20)
#define RPG_GAMECORE_AVATARROWDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A001BD0)
#define RPG_GAMECORE_AVATARROWDATA_GETAVATARBASETYPEMASK_OFFSET UNITYSDK_OFFSET(0x1A010360)
#define RPG_GAMECORE_AVATARROWDATA_GETEXRANKCONFIGROWBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x1A010740)
#define RPG_GAMECORE_AVATARROWDATA_GETEXRANKROWMAP_OFFSET UNITYSDK_OFFSET(0x1A008280)
#define RPG_GAMECORE_AVATARROWDATA_GETRANKCONFIGROWBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x1A008780)
#define RPG_GAMECORE_AVATARROWDATA_GETRANKROWMAP_OFFSET UNITYSDK_OFFSET(0x1A008240)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0x1A0106B0)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0x1A010660)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x1A010610)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLTREELEVELMAP_OFFSET UNITYSDK_OFFSET(0x1A010700)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEPOINTLEVEL_OFFSET UNITYSDK_OFFSET(0x1A00EA70)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEPROPERTYMAP_OFFSET UNITYSDK_OFFSET(0x1A008B80)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEROWBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x1A008630)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEROWMAP_OFFSET UNITYSDK_OFFSET(0x1A0081F0)
#define RPG_GAMECORE_AVATARROWDATA_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x1A00F990)
#define RPG_GAMECORE_AVATARROWDATA_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0x1A00EFE0)
#define RPG_GAMECORE_AVATARROWDATA_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0x1A004AD0)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATARMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x1A00FB70)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATARROW_OFFSET UNITYSDK_OFFSET(0x1A00ECE0)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x1A00FAB0)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATARVOTAG_OFFSET UNITYSDK_OFFSET(0x1A010200)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x1A006660)
#define RPG_GAMECORE_AVATARROWDATA_GET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0x1A00F3E0)
#define RPG_GAMECORE_AVATARROWDATA_GET_BASETYPECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1A010340)
#define RPG_GAMECORE_AVATARROWDATA_GET_BATTLEEQUIPMENTLIST_OFFSET UNITYSDK_OFFSET(0x1A00F280)
#define RPG_GAMECORE_AVATARROWDATA_GET_BATTLERELICITEMMODULE_OFFSET UNITYSDK_OFFSET(0x1A00F290)
#define RPG_GAMECORE_AVATARROWDATA_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x1A00F670)
#define RPG_GAMECORE_AVATARROWDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1A00ED60)
#define RPG_GAMECORE_AVATARROWDATA_GET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x1A005940)
#define RPG_GAMECORE_AVATARROWDATA_GET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0x1A005BB0)
#define RPG_GAMECORE_AVATARROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0x1A00FF30)
#define RPG_GAMECORE_AVATARROWDATA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1A00FDF0)
#define RPG_GAMECORE_AVATARROWDATA_GET_DEFENCE_OFFSET UNITYSDK_OFFSET(0x1A004FA0)
#define RPG_GAMECORE_AVATARROWDATA_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x1A00ED20)
#define RPG_GAMECORE_AVATARROWDATA_GET_EQUIPEXTRARANK_OFFSET UNITYSDK_OFFSET(0x1A00ED50)
#define RPG_GAMECORE_AVATARROWDATA_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0x1A0101A0)
#define RPG_GAMECORE_AVATARROWDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1A00F8D0)
#define RPG_GAMECORE_AVATARROWDATA_GET_INITACTIONDELAYRATIO_OFFSET UNITYSDK_OFFSET(0x1A00F5D0)
#define RPG_GAMECORE_AVATARROWDATA_GET_INITHP_OFFSET UNITYSDK_OFFSET(0x1A00F2A0)
#define RPG_GAMECORE_AVATARROWDATA_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0x1A00F810)
#define RPG_GAMECORE_AVATARROWDATA_GET_ISASSISTANTAVATAR_OFFSET UNITYSDK_OFFSET(0x1A010330)
#define RPG_GAMECORE_AVATARROWDATA_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x1A00EE90)
#define RPG_GAMECORE_AVATARROWDATA_GET_JSON_OFFSET UNITYSDK_OFFSET(0x1A00ECF0)
#define RPG_GAMECORE_AVATARROWDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A00F120)
#define RPG_GAMECORE_AVATARROWDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1A0045A0)
#define RPG_GAMECORE_AVATARROWDATA_GET_MAXSTANCE_OFFSET UNITYSDK_OFFSET(0x1A00F510)
#define RPG_GAMECORE_AVATARROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0x1A00F2B0)
#define RPG_GAMECORE_AVATARROWDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x1A00F620)
#define RPG_GAMECORE_AVATARROWDATA_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x1A00FCC0)
#define RPG_GAMECORE_AVATARROWDATA_GET_OVERRIDEAIPATHS_OFFSET UNITYSDK_OFFSET(0x1A00F110)
#define RPG_GAMECORE_AVATARROWDATA_GET_PREVIEWSERVANTROWDATA_OFFSET UNITYSDK_OFFSET(0x1A0103C0)
#define RPG_GAMECORE_AVATARROWDATA_GET_PROMOTIONROW_OFFSET UNITYSDK_OFFSET(0x1A00ED10)
#define RPG_GAMECORE_AVATARROWDATA_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x1A00ED40)
#define RPG_GAMECORE_AVATARROWDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1A00ED30)
#define RPG_GAMECORE_AVATARROWDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1A00F130)
#define RPG_GAMECORE_AVATARROWDATA_GET_RESISTANCE_OFFSET UNITYSDK_OFFSET(0x1A00F550)
#define RPG_GAMECORE_AVATARROWDATA_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x1A00F930)
#define RPG_GAMECORE_AVATARROWDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1A00EC90)
#define RPG_GAMECORE_AVATARROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1A00F9F0)
#define RPG_GAMECORE_AVATARROWDATA_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0x1A00F260)
#define RPG_GAMECORE_AVATARROWDATA_GET_SPECIALROW_OFFSET UNITYSDK_OFFSET(0x1A00ED00)
#define RPG_GAMECORE_AVATARROWDATA_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1A005470)
#define RPG_GAMECORE_AVATARROWDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x1A010060)
#define RPG_GAMECORE_AVATARROWDATA_GET_STATUSPROBABILITY_OFFSET UNITYSDK_OFFSET(0x1A00F590)
#define RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x1A00F270)
#define RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLCUTINPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1A00FB10)
#define RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1A004A70)
#define RPG_GAMECORE_AVATARROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1A00FA50)
#define RPG_GAMECORE_AVATARROWDATA_HASAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0x1A0082C0)
#define RPG_GAMECORE_AVATARROWDATA_INITFROMAVATARDATA_OFFSET UNITYSDK_OFFSET(0x1A00AF30)
#define RPG_GAMECORE_AVATARROWDATA_INITFROMCREATEPARAMS_OFFSET UNITYSDK_OFFSET(0x1A001BE0)
#define RPG_GAMECORE_AVATARROWDATA_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0x1A00D390)
#define RPG_GAMECORE_AVATARROWDATA_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0x1A00FBC0)
#define RPG_GAMECORE_AVATARROWDATA_SET_BASETYPECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1A010350)
#define RPG_GAMECORE_AVATARROWDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1A00ECA0)
#define RPG_GAMECORE_AVATARROWDATA__INITDATA_OFFSET UNITYSDK_OFFSET(0x1A00BA50)
#define RPG_GAMECORE_AVATARROWDATA__INITOVERRIDEAIPATHS_OFFSET UNITYSDK_OFFSET(0x1A00E330)
#define RPG_GAMECORE_AVATARROWDATA__OVERRIDESKILLHIDEINUI_OFFSET UNITYSDK_OFFSET(0x1A0107D0)
#define RPG_GAMECORE_AVATARROWDATA__REFRESHSHOWEXRANKTAG_OFFSET UNITYSDK_OFFSET(0x1A011130)
#define RPG_GAMECORE_AVATARROWDATA__SETUPSKILLLIST_OFFSET UNITYSDK_OFFSET(0x1A00D4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRowData_TypeDefinitionIndex = 58154;

	class AvatarRowData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _SkillTreeSkillLevelMap; // 0x10
		::RPG::GameCore::IAvatarPromotionCommonRowWrap* _PromotionRow; // 0x18
		::RPG::GameCore::AvatarBaseTypeCollection* _BaseTypeCollection_k__BackingField; // 0x20
		::RPG::GameCore::CharacterConfig* _Json; // 0x28
		::Il2CppArray<::System::String*>* _OverrideAIPaths; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::AvatarRankConfigRow*>* _RankConfigTriggerKeMap; // 0x38
		::RPG::GameCore::ENpcE07Config* _ENpcE07Config; // 0x40
		::System::Collections::Generic::List_1<::AGGHHCLPALK*>* _ChangedSkillTreeDataList; // 0x48
		::System::Collections::Generic::List_1<::OECEIBFKDGD>* _SkillChangeDataList; // 0x50
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::EIBJGIEGOML*>* _ExRankConfigTriggerKeyMap; // 0x58
		::NMBMHCNGCFG* _BattleRelicItemModule; // 0x60
		::Il2CppArray<::JGGNIOIBDBC*>* _BattleEquipmentList; // 0x68
		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* _SkillRowDatas; // 0x70
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* _SkillTreePropertyMap; // 0x78
		::RPG::GameCore::ServantRowData* _PreviewServantRowData; // 0x80
		::RPG::GameCore::AvatarUltraSkillConfigRow* _UltraSkillConfig; // 0x88
		::RPG::GameCore::SpecialAvatarRow* _SpecialRow; // 0x90
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x98
		::PIOFBIDPBMI _OverrideDisplay; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarSkillTreeRow*>* _SkillTreeTriggerKeyMap; // 0x108
		::System::Collections::Generic::List_1<::AGGHHCLPALK*>* _SkillTreeDataList; // 0x110
		::ADILGMDJEJF* _plugin; // 0x118
		::RPG::GameCore::IAvatarCommonRowWrap* _Row; // 0x120
		::System::UInt32 _Promotion; // 0x128
		::System::UInt32 _Rank; // 0x12C
		::System::UInt32 _Level; // 0x130
		::System::UInt32 _EquipExtraRank; // 0x134
		::RPG::GameCore::AvatarBaseType _ExtraAvatarBaseType; // 0x138
		::System::Byte _padding0[0x4];
		::IDMGKNGKLDH _OverrideData; // 0x140
		::System::Boolean _IsAssistantAvatar; // 0x158
		::System::Byte _padding1[0x3];
		::System::UInt32 _EnhancedID; // 0x15C
		static ::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarSkillCommonRowWrap*>** StaticGet__TmpSkillRowList()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarSkillCommonRowWrap*>**)UnitySDK::FromName("RPG.GameCore", "AvatarRowData")->GetStaticField(0x67560);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::IAvatarSkillCommonRowWrap*>** StaticGet__TmpSkillRowMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::IAvatarSkillCommonRowWrap*>**)UnitySDK::FromName("RPG.GameCore", "AvatarRowData")->GetStaticField(0x67568);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_CCTOR_OFFSET))();
		}

		::System::Void InitFromAvatarData(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_INITFROMAVATARDATA_OFFSET))(this, a1);
		}

		::System::Void InitFromCreateParams(::DLIBCMNBLGF* a1, ::ADILGMDJEJF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DLIBCMNBLGF*, ::ADILGMDJEJF*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_INITFROMCREATEPARAMS_OFFSET))(this, a1, a2);
		}

		::System::Void _InitData(::System::UInt32 a1, ::RPG::GameCore::CharacterConfig* a2, ::System::String* a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::Il2CppArray<::System::UInt32>* a7, ::System::UInt32 a8, ::System::UInt32 a9, ::System::UInt32 a10, ::System::Boolean a11, ::RPG::GameCore::AvatarRowWrapperDeriveType a12, ::System::Collections::Generic::List_1<::AGGHHCLPALK*>* a13, ::System::Collections::Generic::List_1<::AGGHHCLPALK*>* a14, ::System::Collections::Generic::List_1<::OECEIBFKDGD>* a15, ::Il2CppArray<::JGGNIOIBDBC*>* a16, ::NMBMHCNGCFG* a17, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>* a18, ::RPG::GameCore::BattleGridFightAvatarData* a19)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CharacterConfig*, ::System::String*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::AvatarRowWrapperDeriveType, ::System::Collections::Generic::List_1<::AGGHHCLPALK*>*, ::System::Collections::Generic::List_1<::AGGHHCLPALK*>*, ::System::Collections::Generic::List_1<::OECEIBFKDGD>*, ::Il2CppArray<::JGGNIOIBDBC*>*, ::NMBMHCNGCFG*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>*, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__INITDATA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
		}

		::System::Void _InitOverrideAIPaths()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__INITOVERRIDEAIPATHS_OFFSET))(this);
		}

		::System::UInt32 GetSkillTreePointLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEPOINTLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean CheckHasExRank(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_CHECKHASEXRANK_OFFSET))(this, a1);
		}

		::System::Object* get_Row()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::IAvatarCommonRowWrap* get_AvatarRow()
		{
			return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATARROW_OFFSET))(this);
		}

		::RPG::GameCore::CharacterConfig* get_Json()
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_JSON_OFFSET))(this);
		}

		::RPG::GameCore::SpecialAvatarRow* get_SpecialRow()
		{
			return ((::RPG::GameCore::SpecialAvatarRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_SPECIALROW_OFFSET))(this);
		}

		::EOOCGPJPHEI* get_PromotionRow()
		{
			return ((::EOOCGPJPHEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_PROMOTIONROW_OFFSET))(this);
		}

		::System::UInt32 get_EnhancedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_RANK_OFFSET))(this);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_PROMOTION_OFFSET))(this);
		}

		::System::UInt32 get_EquipExtraRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_EQUIPEXTRARANK_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_JSONPATH_OFFSET))(this);
		}

		::System::String* get_AIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AIPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_OverrideAIPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_OVERRIDEAIPATHS_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_LEVEL_OFFSET))(this);
		}

		::RPG::GameCore::CombatPowerAvatarRarityType get_Rarity()
		{
			return ((::RPG::GameCore::CombatPowerAvatarRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_RARITY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_SKILLROWDATAS_OFFSET))(this);
		}

		::RPG::GameCore::AvatarUltraSkillConfigRow* get_UltraSkillConfig()
		{
			return ((::RPG::GameCore::AvatarUltraSkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSpecialUltraType get_UltraSkillType()
		{
			return ((::RPG::GameCore::AvatarSpecialUltraType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLTYPE_OFFSET))(this);
		}

		::Il2CppArray<::JGGNIOIBDBC*>* get_BattleEquipmentList()
		{
			return ((::Il2CppArray<::JGGNIOIBDBC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_BATTLEEQUIPMENTLIST_OFFSET))(this);
		}

		::NMBMHCNGCFG* get_BattleRelicItemModule()
		{
			return ((::NMBMHCNGCFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_BATTLERELICITEMMODULE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_MAXHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_INITHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Attack()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ATTACK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Defence()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_DEFENCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Speed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_SPEED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalChance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_CRITICALCHANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_CRITICALDAMAGE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MinimumFatigueRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BaseAggro()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_BASEAGGRO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxStance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_MAXSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Resistance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_RESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_StatusProbability()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_STATUSPROBABILITY_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitActionDelayRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_INITACTIONDELAYRATIO_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_MODELPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Introduction()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_INTRODUCTION_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_ActionIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ACTIONICONPATH_OFFSET))(this);
		}

		::System::String* get_SideAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_WaitingAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_AvatarSideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATARSIDEICONPATH_OFFSET))(this);
		}

		::System::String* get_UltraSkillCutInPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLCUTINPREFABPATH_OFFSET))(this);
		}

		::System::String* get_AvatarMiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATARMINIICONPATH_OFFSET))(this);
		}

		::System::Void OverrideDisplay(::PIOFBIDPBMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOFBIDPBMI))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_OVERRIDEDISPLAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_NatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_NATUREID_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_DAMAGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
		{
			return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_SPNEED_OFFSET))(this);
		}

		::System::Boolean get_HaveActionDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_HAVEACTIONDELAY_OFFSET))(this);
		}

		::System::String* get_AvatarVOTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATARVOTAG_OFFSET))(this);
		}

		::System::Boolean get_IsAssistantAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ISASSISTANTAVATAR_OFFSET))(this);
		}

		::System::Void OverrideData(::IDMGKNGKLDH a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDMGKNGKLDH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_OVERRIDEDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarBaseTypeCollection* get_BaseTypeCollection()
		{
			return ((::RPG::GameCore::AvatarBaseTypeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_BASETYPECOLLECTION_OFFSET))(this);
		}

		::System::Void set_BaseTypeCollection(::RPG::GameCore::AvatarBaseTypeCollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarBaseTypeCollection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_SET_BASETYPECOLLECTION_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarBaseTypeMask GetAvatarBaseTypeMask(::RPG::GameCore::AvatarBaseTypeKind a1)
		{
			return ((::RPG::GameCore::AvatarBaseTypeMask(*)(::PVOID, ::RPG::GameCore::AvatarBaseTypeKind))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETAVATARBASETYPEMASK_OFFSET))(this, a1);
		}

		::System::Boolean HasAvatarBaseType(::RPG::GameCore::AvatarBaseType a1, ::RPG::GameCore::AvatarBaseTypeKind a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarBaseType, ::RPG::GameCore::AvatarBaseTypeKind))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_HASAVATARBASETYPE_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATAR_OFFSET))(this);
		}

		::RPG::GameCore::ServantRowData* get_PreviewServantRowData()
		{
			return ((::RPG::GameCore::ServantRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_PREVIEWSERVANTROWDATA_OFFSET))(this);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATABYNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATABYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarSkillTreeRow*>* GetSkillTreeRowMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarSkillTreeRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEROWMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::AvatarRankConfigRow*>* GetRankRowMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::AvatarRankConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETRANKROWMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::EIBJGIEGOML*>* GetExRankRowMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::EIBJGIEGOML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETEXRANKROWMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* GetSkillTreePropertyMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEPROPERTYMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* GetSkillTreeLevelMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLTREELEVELMAP_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSkillTreeRow* GetSkillTreeRowByTriggerKey(::RPG::GameCore::AvatarSkillTreePointTriggerKey a1)
		{
			return ((::RPG::GameCore::AvatarSkillTreeRow*(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreePointTriggerKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEROWBYTRIGGERKEY_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarRankConfigRow* GetRankConfigRowByTriggerKey(::RPG::GameCore::StringHash a1)
		{
			return ((::RPG::GameCore::AvatarRankConfigRow*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETRANKCONFIGROWBYTRIGGERKEY_OFFSET))(this, a1);
		}

		::EIBJGIEGOML* GetExRankConfigRowByTriggerKey(::RPG::GameCore::StringHash a1)
		{
			return ((::EIBJGIEGOML*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETEXRANKCONFIGROWBYTRIGGERKEY_OFFSET))(this, a1);
		}

		::System::Void _SetupSkillList(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__SETUPSKILLLIST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OverrideSkillHideInUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__OVERRIDESKILLHIDEINUI_OFFSET))(this);
		}

		::System::Void _RefreshShowExRankTag(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__REFRESHSHOWEXRANKTAG_OFFSET))(this, a1);
		}

	};
}

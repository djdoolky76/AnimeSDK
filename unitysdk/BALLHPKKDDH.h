#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class GBDODOMIMIF;
class LCJIAMCDDFL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BALLHPKKDDH_CTOR_OFFSET UNITYSDK_OFFSET(0x15E74450)
#define BALLHPKKDDH_GET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x15E74230)
#define BALLHPKKDDH_GET_AICONFIGPATH_OFFSET UNITYSDK_OFFSET(0x15E74370)
#define BALLHPKKDDH_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x15E741B0)
#define BALLHPKKDDH_GET_DEFAULTUNLOCKTRACENODEPROFILES_OFFSET UNITYSDK_OFFSET(0x15E74430)
#define BALLHPKKDDH_GET_EIDOLONIDS_OFFSET UNITYSDK_OFFSET(0x15E74330)
#define BALLHPKKDDH_GET_ENGLISHNAME_OFFSET UNITYSDK_OFFSET(0x15E741F0)
#define BALLHPKKDDH_GET_EXPGROUP_OFFSET UNITYSDK_OFFSET(0x15E742D0)
#define BALLHPKKDDH_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x15E74180)
#define BALLHPKKDDH_GET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x15E74270)
#define BALLHPKKDDH_GET_MAXEIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0x15E74310)
#define BALLHPKKDDH_GET_MAXPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x15E742F0)
#define BALLHPKKDDH_GET_MAXSP_OFFSET UNITYSDK_OFFSET(0x15E742B0)
#define BALLHPKKDDH_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15E741D0)
#define BALLHPKKDDH_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x15E74290)
#define BALLHPKKDDH_GET_PATH_OFFSET UNITYSDK_OFFSET(0x15E74190)
#define BALLHPKKDDH_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x15E74250)
#define BALLHPKKDDH_GET_SKILLIDS_OFFSET UNITYSDK_OFFSET(0x15E74350)
#define BALLHPKKDDH_GET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET UNITYSDK_OFFSET(0x15E743F0)
#define BALLHPKKDDH_GET_SPECIALULTRASKILLRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x15E743D0)
#define BALLHPKKDDH_GET_TRACEANCHORTYPES_OFFSET UNITYSDK_OFFSET(0x15E74410)
#define BALLHPKKDDH_GET_TRACETREEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x15E74390)
#define BALLHPKKDDH_GET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x15E743B0)
#define BALLHPKKDDH_GET_VOTAG_OFFSET UNITYSDK_OFFSET(0x15E74210)
#define BALLHPKKDDH_SET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x15E74240)
#define BALLHPKKDDH_SET_AICONFIGPATH_OFFSET UNITYSDK_OFFSET(0x15E74380)
#define BALLHPKKDDH_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x15E741C0)
#define BALLHPKKDDH_SET_DEFAULTUNLOCKTRACENODEPROFILES_OFFSET UNITYSDK_OFFSET(0x15E74440)
#define BALLHPKKDDH_SET_EIDOLONIDS_OFFSET UNITYSDK_OFFSET(0x15E74340)
#define BALLHPKKDDH_SET_ENGLISHNAME_OFFSET UNITYSDK_OFFSET(0x15E74200)
#define BALLHPKKDDH_SET_EXPGROUP_OFFSET UNITYSDK_OFFSET(0x15E742E0)
#define BALLHPKKDDH_SET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x15E74280)
#define BALLHPKKDDH_SET_MAXEIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0x15E74320)
#define BALLHPKKDDH_SET_MAXPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x15E74300)
#define BALLHPKKDDH_SET_MAXSP_OFFSET UNITYSDK_OFFSET(0x15E742C0)
#define BALLHPKKDDH_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15E741E0)
#define BALLHPKKDDH_SET_NATUREID_OFFSET UNITYSDK_OFFSET(0x15E742A0)
#define BALLHPKKDDH_SET_PATH_OFFSET UNITYSDK_OFFSET(0x15E741A0)
#define BALLHPKKDDH_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x15E74260)
#define BALLHPKKDDH_SET_SKILLIDS_OFFSET UNITYSDK_OFFSET(0x15E74360)
#define BALLHPKKDDH_SET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET UNITYSDK_OFFSET(0x15E74400)
#define BALLHPKKDDH_SET_SPECIALULTRASKILLRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x15E743E0)
#define BALLHPKKDDH_SET_TRACEANCHORTYPES_OFFSET UNITYSDK_OFFSET(0x15E74420)
#define BALLHPKKDDH_SET_TRACETREEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x15E743A0)
#define BALLHPKKDDH_SET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x15E743C0)
#define BALLHPKKDDH_SET_VOTAG_OFFSET UNITYSDK_OFFSET(0x15E74220)

	class BALLHPKKDDH : public ::System::Object
	{
	public:
		::System::String* _JsonConfigPath_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::KFBOFAILIBG>* _DefaultUnlockTraceNodeProfiles_k__BackingField; // 0x18
		::System::String* _AIConfigPath_k__BackingField; // 0x20
		::System::String* _TraceTreePrefabPath_k__BackingField; // 0x28
		::GBDODOMIMIF* _Path_k__BackingField; // 0x30
		::Il2CppArray<::System::UInt32>* _EidolonIDs_k__BackingField; // 0x38
		::LCJIAMCDDFL* _DamageType_k__BackingField; // 0x40
		::System::String* _SpecialUltraSkillResourcePath_k__BackingField; // 0x48
		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>* _TraceAnchorTypes_k__BackingField; // 0x50
		::System::String* _VOTag_k__BackingField; // 0x58
		::Il2CppArray<::System::UInt32>* _SkillIDs_k__BackingField; // 0x60
		::RPG::Client::TextID _EnglishName_k__BackingField; // 0x68
		::System::UInt32 _AdventurePlayerID_k__BackingField; // 0x78
		::RPG::GameCore::AvatarSpecialUltraType _UltraSkillType_k__BackingField; // 0x7C
		::APCGKBOPGJL _Identifier_k__BackingField; // 0x80
		::System::UInt32 _ExpGroup_k__BackingField; // 0x88
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _SpecialUltraSkillEnergyLackTips_k__BackingField; // 0x90
		::System::UInt32 _NatureID_k__BackingField; // 0xA0
		::System::UInt32 _MaxEidolonLevel_k__BackingField; // 0xA4
		::RPG::Client::TextID _Name_k__BackingField; // 0xA8
		::System::UInt32 _MaxPromotionLevel_k__BackingField; // 0xB8
		::RPG::GameCore::CombatPowerAvatarRarityType _Rarity_k__BackingField; // 0xBC
		::RPG::GameCore::FixPoint _MaxSP_k__BackingField; // 0xC0
		::System::Void _ctor(::APCGKBOPGJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + BALLHPKKDDH_CTOR_OFFSET))(this, a1);
		}

		::APCGKBOPGJL get_Identifier()
		{
			return ((::APCGKBOPGJL(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_IDENTIFIER_OFFSET))(this);
		}

		::GBDODOMIMIF* get_Path()
		{
			return ((::GBDODOMIMIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::GBDODOMIMIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBDODOMIMIF*))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_PATH_OFFSET))(this, a1);
		}

		::LCJIAMCDDFL* get_DamageType()
		{
			return ((::LCJIAMCDDFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_DAMAGETYPE_OFFSET))(this);
		}

		::System::Void set_DamageType(::LCJIAMCDDFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCJIAMCDDFL*))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_DAMAGETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_EnglishName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_ENGLISHNAME_OFFSET))(this);
		}

		::System::Void set_EnglishName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_ENGLISHNAME_OFFSET))(this, a1);
		}

		::System::String* get_VOTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_VOTAG_OFFSET))(this);
		}

		::System::Void set_VOTag(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_VOTAG_OFFSET))(this, a1);
		}

		::System::UInt32 get_AdventurePlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_ADVENTUREPLAYERID_OFFSET))(this);
		}

		::System::Void set_AdventurePlayerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_ADVENTUREPLAYERID_OFFSET))(this, a1);
		}

		::RPG::GameCore::CombatPowerAvatarRarityType get_Rarity()
		{
			return ((::RPG::GameCore::CombatPowerAvatarRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::RPG::GameCore::CombatPowerAvatarRarityType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CombatPowerAvatarRarityType))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_RARITY_OFFSET))(this, a1);
		}

		::System::String* get_JsonConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_JSONCONFIGPATH_OFFSET))(this);
		}

		::System::Void set_JsonConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_JSONCONFIGPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_NatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_NATUREID_OFFSET))(this);
		}

		::System::Void set_NatureID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_NATUREID_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MaxSP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_MAXSP_OFFSET))(this);
		}

		::System::Void set_MaxSP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_MAXSP_OFFSET))(this, a1);
		}

		::System::UInt32 get_ExpGroup()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_EXPGROUP_OFFSET))(this);
		}

		::System::Void set_ExpGroup(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_EXPGROUP_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxPromotionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_MAXPROMOTIONLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxPromotionLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_MAXPROMOTIONLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxEidolonLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_MAXEIDOLONLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxEidolonLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_MAXEIDOLONLEVEL_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_EidolonIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_EIDOLONIDS_OFFSET))(this);
		}

		::System::Void set_EidolonIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_EIDOLONIDS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_SkillIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_SKILLIDS_OFFSET))(this);
		}

		::System::Void set_SkillIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_SKILLIDS_OFFSET))(this, a1);
		}

		::System::String* get_AIConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_AICONFIGPATH_OFFSET))(this);
		}

		::System::Void set_AIConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_AICONFIGPATH_OFFSET))(this, a1);
		}

		::System::String* get_TraceTreePrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_TRACETREEPREFABPATH_OFFSET))(this);
		}

		::System::Void set_TraceTreePrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_TRACETREEPREFABPATH_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarSpecialUltraType get_UltraSkillType()
		{
			return ((::RPG::GameCore::AvatarSpecialUltraType(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_ULTRASKILLTYPE_OFFSET))(this);
		}

		::System::Void set_UltraSkillType(::RPG::GameCore::AvatarSpecialUltraType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSpecialUltraType))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_ULTRASKILLTYPE_OFFSET))(this, a1);
		}

		::System::String* get_SpecialUltraSkillResourcePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_SPECIALULTRASKILLRESOURCEPATH_OFFSET))(this);
		}

		::System::Void set_SpecialUltraSkillResourcePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_SPECIALULTRASKILLRESOURCEPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SpecialUltraSkillEnergyLackTips()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET))(this);
		}

		::System::Void set_SpecialUltraSkillEnergyLackTips(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>* get_TraceAnchorTypes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_TRACEANCHORTYPES_OFFSET))(this);
		}

		::System::Void set_TraceAnchorTypes(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>*))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_TRACEANCHORTYPES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::KFBOFAILIBG>* get_DefaultUnlockTraceNodeProfiles()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::KFBOFAILIBG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_DEFAULTUNLOCKTRACENODEPROFILES_OFFSET))(this);
		}

		::System::Void set_DefaultUnlockTraceNodeProfiles(::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::KFBOFAILIBG>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::KFBOFAILIBG>*))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_DEFAULTUNLOCKTRACENODEPROFILES_OFFSET))(this, a1);
		}

	};

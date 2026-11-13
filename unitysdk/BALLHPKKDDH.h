#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/DGMNKINFKFH.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class LCJIAMCDDFL;
namespace RPG::AvatarSystem { class AvatarPath; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BALLHPKKDDH_CTOR_OFFSET UNITYSDK_OFFSET(0x199DF4C0)
#define BALLHPKKDDH_GET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x199DF280)
#define BALLHPKKDDH_GET_AICONFIGPATH_OFFSET UNITYSDK_OFFSET(0x199DF3E0)
#define BALLHPKKDDH_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x199DF200)
#define BALLHPKKDDH_GET_DEFAULTUNLOCKTRACENODEPROFILES_OFFSET UNITYSDK_OFFSET(0x199DF4A0)
#define BALLHPKKDDH_GET_EIDOLONIDS_OFFSET UNITYSDK_OFFSET(0x199DF380)
#define BALLHPKKDDH_GET_ENGLISHNAME_OFFSET UNITYSDK_OFFSET(0x199DF240)
#define BALLHPKKDDH_GET_EXEIDOLONIDENTIFIERS_OFFSET UNITYSDK_OFFSET(0x199DF3A0)
#define BALLHPKKDDH_GET_EXPGROUP_OFFSET UNITYSDK_OFFSET(0x199DF320)
#define BALLHPKKDDH_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x199DF1D0)
#define BALLHPKKDDH_GET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x199DF2C0)
#define BALLHPKKDDH_GET_MAXEIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0x199DF360)
#define BALLHPKKDDH_GET_MAXPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x199DF340)
#define BALLHPKKDDH_GET_MAXSP_OFFSET UNITYSDK_OFFSET(0x199DF300)
#define BALLHPKKDDH_GET_NAME_OFFSET UNITYSDK_OFFSET(0x199DF220)
#define BALLHPKKDDH_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x199DF2E0)
#define BALLHPKKDDH_GET_PATH_OFFSET UNITYSDK_OFFSET(0x199DF1E0)
#define BALLHPKKDDH_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x199DF2A0)
#define BALLHPKKDDH_GET_SKILLIDS_OFFSET UNITYSDK_OFFSET(0x199DF3C0)
#define BALLHPKKDDH_GET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET UNITYSDK_OFFSET(0x199DF460)
#define BALLHPKKDDH_GET_SPECIALULTRASKILLRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x199DF440)
#define BALLHPKKDDH_GET_TRACEANCHORTYPES_OFFSET UNITYSDK_OFFSET(0x199DF480)
#define BALLHPKKDDH_GET_TRACETREEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x199DF400)
#define BALLHPKKDDH_GET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x199DF420)
#define BALLHPKKDDH_GET_VOTAG_OFFSET UNITYSDK_OFFSET(0x199DF260)
#define BALLHPKKDDH_SET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x199DF290)
#define BALLHPKKDDH_SET_AICONFIGPATH_OFFSET UNITYSDK_OFFSET(0x199DF3F0)
#define BALLHPKKDDH_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x199DF210)
#define BALLHPKKDDH_SET_DEFAULTUNLOCKTRACENODEPROFILES_OFFSET UNITYSDK_OFFSET(0x199DF4B0)
#define BALLHPKKDDH_SET_EIDOLONIDS_OFFSET UNITYSDK_OFFSET(0x199DF390)
#define BALLHPKKDDH_SET_ENGLISHNAME_OFFSET UNITYSDK_OFFSET(0x199DF250)
#define BALLHPKKDDH_SET_EXEIDOLONIDENTIFIERS_OFFSET UNITYSDK_OFFSET(0x199DF3B0)
#define BALLHPKKDDH_SET_EXPGROUP_OFFSET UNITYSDK_OFFSET(0x199DF330)
#define BALLHPKKDDH_SET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x199DF2D0)
#define BALLHPKKDDH_SET_MAXEIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0x199DF370)
#define BALLHPKKDDH_SET_MAXPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x199DF350)
#define BALLHPKKDDH_SET_MAXSP_OFFSET UNITYSDK_OFFSET(0x199DF310)
#define BALLHPKKDDH_SET_NAME_OFFSET UNITYSDK_OFFSET(0x199DF230)
#define BALLHPKKDDH_SET_NATUREID_OFFSET UNITYSDK_OFFSET(0x199DF2F0)
#define BALLHPKKDDH_SET_PATH_OFFSET UNITYSDK_OFFSET(0x199DF1F0)
#define BALLHPKKDDH_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x199DF2B0)
#define BALLHPKKDDH_SET_SKILLIDS_OFFSET UNITYSDK_OFFSET(0x199DF3D0)
#define BALLHPKKDDH_SET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET UNITYSDK_OFFSET(0x199DF470)
#define BALLHPKKDDH_SET_SPECIALULTRASKILLRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x199DF450)
#define BALLHPKKDDH_SET_TRACEANCHORTYPES_OFFSET UNITYSDK_OFFSET(0x199DF490)
#define BALLHPKKDDH_SET_TRACETREEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x199DF410)
#define BALLHPKKDDH_SET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x199DF430)
#define BALLHPKKDDH_SET_VOTAG_OFFSET UNITYSDK_OFFSET(0x199DF270)

inline static constexpr unsigned int BALLHPKKDDH_TypeDefinitionIndex = 53074;

	class BALLHPKKDDH : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::AvatarPath* _Path_k__BackingField; // 0x10
		::System::String* _JsonConfigPath_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _EidolonIDs_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _SkillIDs_k__BackingField; // 0x28
		::Il2CppArray<::DGMNKINFKFH>* _ExEidolonIdentifiers_k__BackingField; // 0x30
		::System::String* _SpecialUltraSkillResourcePath_k__BackingField; // 0x38
		::System::String* _TraceTreePrefabPath_k__BackingField; // 0x40
		::System::String* _AIConfigPath_k__BackingField; // 0x48
		::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::KFBOFAILIBG>* _DefaultUnlockTraceNodeProfiles_k__BackingField; // 0x50
		::LCJIAMCDDFL* _DamageType_k__BackingField; // 0x58
		::System::String* _VOTag_k__BackingField; // 0x60
		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>* _TraceAnchorTypes_k__BackingField; // 0x68
		::RPG::Client::TextID _EnglishName_k__BackingField; // 0x70
		::System::UInt32 _MaxPromotionLevel_k__BackingField; // 0x80
		::System::UInt32 _ExpGroup_k__BackingField; // 0x84
		::RPG::Client::TextID _SpecialUltraSkillEnergyLackTips_k__BackingField; // 0x88
		::RPG::GameCore::FixPoint _MaxSP_k__BackingField; // 0x98
		::System::UInt32 _MaxEidolonLevel_k__BackingField; // 0xA0
		::APCGKBOPGJL _Identifier_k__BackingField; // 0xA4
		::System::UInt32 _AdventurePlayerID_k__BackingField; // 0xAC
		::RPG::GameCore::AvatarSpecialUltraType _UltraSkillType_k__BackingField; // 0xB0
		::System::UInt32 _NatureID_k__BackingField; // 0xB4
		::RPG::GameCore::CombatPowerAvatarRarityType _Rarity_k__BackingField; // 0xB8
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Name_k__BackingField; // 0xC0
		::System::Void _ctor(::APCGKBOPGJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + BALLHPKKDDH_CTOR_OFFSET))(this, a1);
		}

		::APCGKBOPGJL get_Identifier()
		{
			return ((::APCGKBOPGJL(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_IDENTIFIER_OFFSET))(this);
		}

		::RPG::AvatarSystem::AvatarPath* get_Path()
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::RPG::AvatarSystem::AvatarPath* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarPath*))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_PATH_OFFSET))(this, a1);
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

		::Il2CppArray<::DGMNKINFKFH>* get_ExEidolonIdentifiers()
		{
			return ((::Il2CppArray<::DGMNKINFKFH>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALLHPKKDDH_GET_EXEIDOLONIDENTIFIERS_OFFSET))(this);
		}

		::System::Void set_ExEidolonIdentifiers(::Il2CppArray<::DGMNKINFKFH>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::DGMNKINFKFH>*))((::PBYTE)hIl2Cpp + BALLHPKKDDH_SET_EXEIDOLONIDENTIFIERS_OFFSET))(this, a1);
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

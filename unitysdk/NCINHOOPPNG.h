#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/BCGLFKMDELO.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NCINHOOPPNG_ANAHFGMKJMB_OFFSET UNITYSDK_OFFSET(0xC3988B0)
#define NCINHOOPPNG_CTOR_OFFSET UNITYSDK_OFFSET(0xC3987E0)
#define NCINHOOPPNG_GET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xC398680)
#define NCINHOOPPNG_GET_ADDPROPERTIES_OFFSET UNITYSDK_OFFSET(0xC398560)
#define NCINHOOPPNG_GET_ADDSKILLLEVELS_OFFSET UNITYSDK_OFFSET(0xC398580)
#define NCINHOOPPNG_GET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0xC3985C0)
#define NCINHOOPPNG_GET_AVATARLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xC398620)
#define NCINHOOPPNG_GET_AVATARPROMOTIONLIMIT_OFFSET UNITYSDK_OFFSET(0xC398640)
#define NCINHOOPPNG_GET_DEFAULTUNLOCK_OFFSET UNITYSDK_OFFSET(0xC398600)
#define NCINHOOPPNG_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xC398660)
#define NCINHOOPPNG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC3986E0)
#define NCINHOOPPNG_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC398530)
#define NCINHOOPPNG_GET_MATERIALLIST_OFFSET UNITYSDK_OFFSET(0xC3986C0)
#define NCINHOOPPNG_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC3985E0)
#define NCINHOOPPNG_GET_POINTDESC_OFFSET UNITYSDK_OFFSET(0xC398720)
#define NCINHOOPPNG_GET_POINTNAME_OFFSET UNITYSDK_OFFSET(0xC398700)
#define NCINHOOPPNG_GET_PREPOINT_OFFSET UNITYSDK_OFFSET(0xC3986A0)
#define NCINHOOPPNG_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC3985A0)
#define NCINHOOPPNG_GET_RECOMMENDPRIORITY_OFFSET UNITYSDK_OFFSET(0xC398780)
#define NCINHOOPPNG_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xC398760)
#define NCINHOOPPNG_GET_SIMPLEPOINTDESC_OFFSET UNITYSDK_OFFSET(0xC398740)
#define NCINHOOPPNG_GET_SPECIALAVATARIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xC3987A0)
#define NCINHOOPPNG_GET_SPECIALSHOWSKILL_OFFSET UNITYSDK_OFFSET(0xC3987C0)
#define NCINHOOPPNG_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC398540)
#define NCINHOOPPNG_IPCCFFAOMGM_OFFSET UNITYSDK_OFFSET(0xC3987F0)
#define NCINHOOPPNG_KILEPBKMIHE_OFFSET UNITYSDK_OFFSET(0xC398840)
#define NCINHOOPPNG_SET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xC398690)
#define NCINHOOPPNG_SET_ADDPROPERTIES_OFFSET UNITYSDK_OFFSET(0xC398570)
#define NCINHOOPPNG_SET_ADDSKILLLEVELS_OFFSET UNITYSDK_OFFSET(0xC398590)
#define NCINHOOPPNG_SET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0xC3985D0)
#define NCINHOOPPNG_SET_AVATARLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xC398630)
#define NCINHOOPPNG_SET_AVATARPROMOTIONLIMIT_OFFSET UNITYSDK_OFFSET(0xC398650)
#define NCINHOOPPNG_SET_DEFAULTUNLOCK_OFFSET UNITYSDK_OFFSET(0xC398610)
#define NCINHOOPPNG_SET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xC398670)
#define NCINHOOPPNG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC3986F0)
#define NCINHOOPPNG_SET_MATERIALLIST_OFFSET UNITYSDK_OFFSET(0xC3986D0)
#define NCINHOOPPNG_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC3985F0)
#define NCINHOOPPNG_SET_POINTDESC_OFFSET UNITYSDK_OFFSET(0xC398730)
#define NCINHOOPPNG_SET_POINTNAME_OFFSET UNITYSDK_OFFSET(0xC398710)
#define NCINHOOPPNG_SET_PREPOINT_OFFSET UNITYSDK_OFFSET(0xC3986B0)
#define NCINHOOPPNG_SET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC3985B0)
#define NCINHOOPPNG_SET_RECOMMENDPRIORITY_OFFSET UNITYSDK_OFFSET(0xC398790)
#define NCINHOOPPNG_SET_SIMPLEEXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xC398770)
#define NCINHOOPPNG_SET_SIMPLEPOINTDESC_OFFSET UNITYSDK_OFFSET(0xC398750)
#define NCINHOOPPNG_SET_SPECIALAVATARIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xC3987B0)
#define NCINHOOPPNG_SET_SPECIALSHOWSKILL_OFFSET UNITYSDK_OFFSET(0xC3987D0)
#define NCINHOOPPNG_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xC398550)

inline static constexpr unsigned int NCINHOOPPNG_TypeDefinitionIndex = 53083;

	class NCINHOOPPNG : public ::System::Object
	{
	public:
		::System::String* _SimplePointDesc_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* _AddProperties_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _PrePoint_k__BackingField; // 0x20
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* _MaterialList_k__BackingField; // 0x28
		::Il2CppArray<::System::UInt32>* _ExtraEffectIDList_k__BackingField; // 0x30
		::System::String* _AbilityName_k__BackingField; // 0x38
		::System::String* _PointName_k__BackingField; // 0x40
		::System::String* _IconPath_k__BackingField; // 0x48
		::System::String* _PointDesc_k__BackingField; // 0x50
		::Il2CppArray<::System::UInt32>* _AddSkillLevels_k__BackingField; // 0x58
		::System::String* _SpecialAvatarImagePath_k__BackingField; // 0x60
		::Il2CppArray<::System::UInt32>* _SimpleExtraEffectIDList_k__BackingField; // 0x68
		::System::Boolean _DefaultUnlock_k__BackingField; // 0x70
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AvatarSkillTreeAnchorType _AnchorType_k__BackingField; // 0x74
		::System::UInt32 _AvatarPromotionLimit_k__BackingField; // 0x78
		::RPG::GameCore::AvatarSkillTreePointType _Type_k__BackingField; // 0x7C
		::System::UInt32 _RecommendPriority_k__BackingField; // 0x80
		::System::UInt32 _MaxLevel_k__BackingField; // 0x84
		::System::UInt32 _SpecialShowSkill_k__BackingField; // 0x88
		::BCGLFKMDELO _Identifier_k__BackingField; // 0x8C
		::System::UInt32 _AvatarLevelLimit_k__BackingField; // 0x94
		::APCGKBOPGJL _PrototypeIdentifier_k__BackingField; // 0x98
		::System::Void _ctor(::BCGLFKMDELO a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCGLFKMDELO))((::PBYTE)hIl2Cpp + NCINHOOPPNG_CTOR_OFFSET))(this, a1);
		}

		::BCGLFKMDELO get_Identifier()
		{
			return ((::BCGLFKMDELO(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_IDENTIFIER_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSkillTreePointType get_Type()
		{
			return ((::RPG::GameCore::AvatarSkillTreePointType(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::AvatarSkillTreePointType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreePointType))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_TYPE_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_AddProperties()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_ADDPROPERTIES_OFFSET))(this);
		}

		::System::Void set_AddProperties(::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_ADDPROPERTIES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_AddSkillLevels()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_ADDSKILLLEVELS_OFFSET))(this);
		}

		::System::Void set_AddSkillLevels(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_ADDSKILLLEVELS_OFFSET))(this, a1);
		}

		::APCGKBOPGJL get_PrototypeIdentifier()
		{
			return ((::APCGKBOPGJL(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
		}

		::System::Void set_PrototypeIdentifier(::APCGKBOPGJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_PROTOTYPEIDENTIFIER_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarSkillTreeAnchorType get_AnchorType()
		{
			return ((::RPG::GameCore::AvatarSkillTreeAnchorType(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_ANCHORTYPE_OFFSET))(this);
		}

		::System::Void set_AnchorType(::RPG::GameCore::AvatarSkillTreeAnchorType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeAnchorType))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_ANCHORTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_MAXLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_DefaultUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_DEFAULTUNLOCK_OFFSET))(this);
		}

		::System::Void set_DefaultUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_DEFAULTUNLOCK_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarLevelLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_AVATARLEVELLIMIT_OFFSET))(this);
		}

		::System::Void set_AvatarLevelLimit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_AVATARLEVELLIMIT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarPromotionLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_AVATARPROMOTIONLIMIT_OFFSET))(this);
		}

		::System::Void set_AvatarPromotionLimit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_AVATARPROMOTIONLIMIT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
		}

		::System::Void set_ExtraEffectIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_EXTRAEFFECTIDLIST_OFFSET))(this, a1);
		}

		::System::String* get_AbilityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_ABILITYNAME_OFFSET))(this);
		}

		::System::Void set_AbilityName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_ABILITYNAME_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_PrePoint()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_PREPOINT_OFFSET))(this);
		}

		::System::Void set_PrePoint(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_PREPOINT_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_MaterialList()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_MATERIALLIST_OFFSET))(this);
		}

		::System::Void set_MaterialList(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_MATERIALLIST_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_PointName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_POINTNAME_OFFSET))(this);
		}

		::System::Void set_PointName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_POINTNAME_OFFSET))(this, a1);
		}

		::System::String* get_PointDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_POINTDESC_OFFSET))(this);
		}

		::System::Void set_PointDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_POINTDESC_OFFSET))(this, a1);
		}

		::System::String* get_SimplePointDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_SIMPLEPOINTDESC_OFFSET))(this);
		}

		::System::Void set_SimplePointDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_SIMPLEPOINTDESC_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_SimpleExtraEffectIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET))(this);
		}

		::System::Void set_SimpleExtraEffectIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_SIMPLEEXTRAEFFECTIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_RecommendPriority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_RECOMMENDPRIORITY_OFFSET))(this);
		}

		::System::Void set_RecommendPriority(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_RECOMMENDPRIORITY_OFFSET))(this, a1);
		}

		::System::String* get_SpecialAvatarImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_SPECIALAVATARIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_SpecialAvatarImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_SPECIALAVATARIMAGEPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_SpecialShowSkill()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_GET_SPECIALSHOWSKILL_OFFSET))(this);
		}

		::System::Void set_SpecialShowSkill(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCINHOOPPNG_SET_SPECIALSHOWSKILL_OFFSET))(this, a1);
		}

		::KFBOFAILIBG IPCCFFAOMGM()
		{
			return ((::KFBOFAILIBG(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_IPCCFFAOMGM_OFFSET))(this);
		}

		::System::UInt32 KILEPBKMIHE(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCINHOOPPNG_KILEPBKMIHE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* ANAHFGMKJMB()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCINHOOPPNG_ANAHFGMKJMB_OFFSET))(this);
		}

	};

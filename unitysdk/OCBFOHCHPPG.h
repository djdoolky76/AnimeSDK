#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class BCGKEELAOEA;
class GIDHOABFFFP;
class NNOALJAEMCG;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OCBFOHCHPPG_CTOR_OFFSET UNITYSDK_OFFSET(0xBD4F470)
#define OCBFOHCHPPG_EFHIMDKNADD_OFFSET UNITYSDK_OFFSET(0xBD4FDD0)
#define OCBFOHCHPPG_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xBD4FAB0)
#define OCBFOHCHPPG_GET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0xBD4F430)
#define OCBFOHCHPPG_GET_SKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0xBD4F450)
#define OCBFOHCHPPG_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xBD4F410)
#define OCBFOHCHPPG_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xBD4F570)
#define OCBFOHCHPPG_MHOJFDOJILH_OFFSET UNITYSDK_OFFSET(0xBD4FBD0)
#define OCBFOHCHPPG_SET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0xBD4F440)
#define OCBFOHCHPPG_SET_SKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0xBD4F460)
#define OCBFOHCHPPG_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xBD4F420)

inline static constexpr unsigned int OCBFOHCHPPG_TypeDefinitionIndex = 51950;

	class OCBFOHCHPPG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::KFBOFAILIBG>* NIBABJHIMLD; // 0x10
		::BCGKEELAOEA* _SkillLevelProvider_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::KFBOFAILIBG>* EJDPMHENIAC; // 0x20
		::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* _PropertyModifierProvider_k__BackingField; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>* AAKHNJLJJLM; // 0x30
		::System::UInt32 _Version_k__BackingField; // 0x38
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>* a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::KFBOFAILIBG>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::KFBOFAILIBG>*))((::PBYTE)hIl2Cpp + OCBFOHCHPPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBFOHCHPPG_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCBFOHCHPPG_SET_VERSION_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* get_PropertyModifierProvider()
		{
			return ((::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBFOHCHPPG_GET_PROPERTYMODIFIERPROVIDER_OFFSET))(this);
		}

		::System::Void set_PropertyModifierProvider(::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + OCBFOHCHPPG_SET_PROPERTYMODIFIERPROVIDER_OFFSET))(this, a1);
		}

		::BCGKEELAOEA* get_SkillLevelProvider()
		{
			return ((::BCGKEELAOEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBFOHCHPPG_GET_SKILLLEVELPROVIDER_OFFSET))(this);
		}

		::System::Void set_SkillLevelProvider(::BCGKEELAOEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCGKEELAOEA*))((::PBYTE)hIl2Cpp + OCBFOHCHPPG_SET_SKILLLEVELPROVIDER_OFFSET))(this, a1);
		}

		::System::Void ImportProfile(::NNOALJAEMCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNOALJAEMCG*))((::PBYTE)hIl2Cpp + OCBFOHCHPPG_IMPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void ExportProfile(::GIDHOABFFFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDHOABFFFP*))((::PBYTE)hIl2Cpp + OCBFOHCHPPG_EXPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Boolean MHOJFDOJILH(::RPG::GameCore::AvatarSkillTreeAnchorType a1, ::KFBOFAILIBG a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeAnchorType, ::KFBOFAILIBG))((::PBYTE)hIl2Cpp + OCBFOHCHPPG_MHOJFDOJILH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::KFBOFAILIBG>* EFHIMDKNADD()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KFBOFAILIBG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBFOHCHPPG_EFHIMDKNADD_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BCGKEELAOEA;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define OMBBCMEHFCP_CTOR_OFFSET UNITYSDK_OFFSET(0xBF17A70)
#define OMBBCMEHFCP_EFHIMDKNADD_OFFSET UNITYSDK_OFFSET(0xBF179D0)
#define OMBBCMEHFCP_GET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0xBF17850)
#define OMBBCMEHFCP_GET_SKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0xBF178E0)
#define OMBBCMEHFCP_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xBF17810)
#define OMBBCMEHFCP_MHOJFDOJILH_OFFSET UNITYSDK_OFFSET(0xBF17970)

	class OMBBCMEHFCP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBBCMEHFCP_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBBCMEHFCP_GET_VERSION_OFFSET))(this);
		}

		::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* get_PropertyModifierProvider()
		{
			return ((::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBBCMEHFCP_GET_PROPERTYMODIFIERPROVIDER_OFFSET))(this);
		}

		::BCGKEELAOEA* get_SkillLevelProvider()
		{
			return ((::BCGKEELAOEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBBCMEHFCP_GET_SKILLLEVELPROVIDER_OFFSET))(this);
		}

		::System::Boolean MHOJFDOJILH(::RPG::GameCore::AvatarSkillTreeAnchorType a1, ::KFBOFAILIBG a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeAnchorType, ::KFBOFAILIBG))((::PBYTE)hIl2Cpp + OMBBCMEHFCP_MHOJFDOJILH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::KFBOFAILIBG>* EFHIMDKNADD()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KFBOFAILIBG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBBCMEHFCP_EFHIMDKNADD_OFFSET))(this);
		}

	};

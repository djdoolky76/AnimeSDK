#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define HBPGNCHKJNH_APPLY_OFFSET UNITYSDK_OFFSET(0x15C06E40)
#define HBPGNCHKJNH_COMBINE_OFFSET UNITYSDK_OFFSET(0x15C06ED0)
#define HBPGNCHKJNH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C06E30)
#define HBPGNCHKJNH_RESET_OFFSET UNITYSDK_OFFSET(0x15C06F30)

inline static constexpr unsigned int HBPGNCHKJNH_TypeDefinitionIndex = 62714;

	class HBPGNCHKJNH : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AIKAPJELHNK; // 0x10
		::System::Void _ctor(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HBPGNCHKJNH_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint Apply(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HBPGNCHKJNH_APPLY_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* Combine(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HBPGNCHKJNH_COMBINE_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPGNCHKJNH_RESET_OFFSET))(this);
		}

	};

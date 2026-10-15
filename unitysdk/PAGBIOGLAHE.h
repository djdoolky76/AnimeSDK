#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define PAGBIOGLAHE_APPLY_OFFSET UNITYSDK_OFFSET(0xBFC1850)
#define PAGBIOGLAHE_COMBINE_OFFSET UNITYSDK_OFFSET(0xBFC18A0)
#define PAGBIOGLAHE_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC1840)
#define PAGBIOGLAHE_RESET_OFFSET UNITYSDK_OFFSET(0xBFC1900)

inline static constexpr unsigned int PAGBIOGLAHE_TypeDefinitionIndex = 62713;

	class PAGBIOGLAHE : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AIKAPJELHNK; // 0x10
		::System::Void _ctor(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PAGBIOGLAHE_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint Apply(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PAGBIOGLAHE_APPLY_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* Combine(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PAGBIOGLAHE_COMBINE_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGBIOGLAHE_RESET_OFFSET))(this);
		}

	};

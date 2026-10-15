#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define DIGOIINGIOA_CTOR_OFFSET UNITYSDK_OFFSET(0xEBF0310)
#define DIGOIINGIOA_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xEBF0320)

inline static constexpr unsigned int DIGOIINGIOA_TypeDefinitionIndex = 62529;

	class DIGOIINGIOA : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* GAJHLFGLCCK; // 0x10
		::System::Void _ctor(::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + DIGOIINGIOA_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint PKADDEPKJFN(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DIGOIINGIOA_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};

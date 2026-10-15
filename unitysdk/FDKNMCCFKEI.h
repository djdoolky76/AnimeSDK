#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
class GHCECAKHKJP;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define FDKNMCCFKEI_CALCULATEVALUE_OFFSET UNITYSDK_OFFSET(0x156DE0A0)
#define FDKNMCCFKEI_CTOR_OFFSET UNITYSDK_OFFSET(0x156DDFE0)

inline static constexpr unsigned int FDKNMCCFKEI_TypeDefinitionIndex = 75129;

	class FDKNMCCFKEI : public ::System::Object
	{
	public:
		::GHCECAKHKJP* AGFAPPGGKMA; // 0x10
		::System::Void _ctor(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + FDKNMCCFKEI_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal CalculateValue(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + FDKNMCCFKEI_CALCULATEVALUE_OFFSET))(this, a1);
		}

	};

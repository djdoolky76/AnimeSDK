#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
class GHCECAKHKJP;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define COLCDJNDLDD_CALCULATEVALUE_OFFSET UNITYSDK_OFFSET(0xDCBA390)
#define COLCDJNDLDD_CTOR_OFFSET UNITYSDK_OFFSET(0xDCBA230)

inline static constexpr unsigned int COLCDJNDLDD_TypeDefinitionIndex = 75128;

	class COLCDJNDLDD : public ::System::Object
	{
	public:
		::GHCECAKHKJP* OEHHIIEPDIK; // 0x10
		::GHCECAKHKJP* BFPOCEDAOMA; // 0x18
		::System::Void _ctor(::RPG::GameCore::IdleLiveAvatarPropertyType a1, ::RPG::GameCore::IdleLiveAvatarPropertyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + COLCDJNDLDD_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal CalculateValue(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + COLCDJNDLDD_CALCULATEVALUE_OFFSET))(this, a1);
		}

	};

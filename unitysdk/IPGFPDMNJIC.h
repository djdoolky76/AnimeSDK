#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define IPGFPDMNJIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1651FD60)
#define IPGFPDMNJIC_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1651F990)

inline static constexpr unsigned int IPGFPDMNJIC_TypeDefinitionIndex = 77399;

	class IPGFPDMNJIC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGFPDMNJIC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetValue(::IOGNBKGNPFD* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::IOGNBKGNPFD*, ::Entitas::IEntity*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + IPGFPDMNJIC_GETVALUE_OFFSET))(this, a1, a2, a3);
		}

	};

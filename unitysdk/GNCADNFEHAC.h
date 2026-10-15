#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterConstantConfig; }

#define GNCADNFEHAC_CTOR_OFFSET UNITYSDK_OFFSET(0x15AFD1A0)
#define GNCADNFEHAC_FIJOLNFHKAL_OFFSET UNITYSDK_OFFSET(0x15AFD0E0)
#define GNCADNFEHAC_GETVALUE_OFFSET UNITYSDK_OFFSET(0x15AFD050)

	class GNCADNFEHAC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCADNFEHAC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetValue(::IOGNBKGNPFD* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::IOGNBKGNPFD*, ::Entitas::IEntity*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + GNCADNFEHAC_GETVALUE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean FIJOLNFHKAL(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a1, ::RPG::GameCore::LittleGameAbilityValueGetterConstantConfig* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*, ::RPG::GameCore::LittleGameAbilityValueGetterConstantConfig*))((::PBYTE)hIl2Cpp + GNCADNFEHAC_FIJOLNFHKAL_OFFSET))(a1, a2);
		}

	};

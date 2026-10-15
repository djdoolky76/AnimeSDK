#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJDPEGIFLGB;
namespace RPG::GameCore { class AdventureCharacterController; }

#define GJDPEGIFLGB___C__DISPLAYCLASS50_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15A56170)
#define GJDPEGIFLGB___C__DISPLAYCLASS50_0___GETORCREATEENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x15A56340)

inline static constexpr unsigned int GJDPEGIFLGB___c__DisplayClass50_0_TypeDefinitionIndex = 75539;

	class GJDPEGIFLGB___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::AdventureCharacterController* characterCtrl; // 0x10
		::GJDPEGIFLGB* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB___C__DISPLAYCLASS50_0_CTOR_OFFSET))(this);
		}

		::System::Void __GetOrCreateEntity_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB___C__DISPLAYCLASS50_0___GETORCREATEENTITY_B__0_OFFSET))(this);
		}

	};

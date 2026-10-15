#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJJKDGFODDL;
class PJJKDGFODDL_BFADGAHEKLK;
namespace RPG::GameCore { class GameEntity; }

#define PJJKDGFODDL___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC290510)
#define PJJKDGFODDL___C__DISPLAYCLASS8_0___TRYSPAWNGUESTPET_B__0_OFFSET UNITYSDK_OFFSET(0xC296060)

inline static constexpr unsigned int PJJKDGFODDL___c__DisplayClass8_0_TypeDefinitionIndex = 75641;

	class PJJKDGFODDL___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::PJJKDGFODDL_BFADGAHEKLK* handle; // 0x10
		::PJJKDGFODDL* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void __TrySpawnGuestPet_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PJJKDGFODDL___C__DISPLAYCLASS8_0___TRYSPAWNGUESTPET_B__0_OFFSET))(this, a1);
		}

	};

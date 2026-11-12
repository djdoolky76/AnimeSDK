#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJJKDGFODDL;
class PJJKDGFODDL_BFADGAHEKLK;
namespace RPG::GameCore { class GameEntity; }

#define PJJKDGFODDL___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCBB8610)
#define PJJKDGFODDL___C__DISPLAYCLASS8_0___TRYSPAWNGUESTPET_B__0_OFFSET UNITYSDK_OFFSET(0xCBBE380)

inline static constexpr unsigned int PJJKDGFODDL___c__DisplayClass8_0_TypeDefinitionIndex = 77968;

	class PJJKDGFODDL___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::PJJKDGFODDL* __4__this; // 0x10
		::PJJKDGFODDL_BFADGAHEKLK* handle; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void __TrySpawnGuestPet_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PJJKDGFODDL___C__DISPLAYCLASS8_0___TRYSPAWNGUESTPET_B__0_OFFSET))(this, a1);
		}

	};

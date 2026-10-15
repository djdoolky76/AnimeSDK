#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }

#define IJPDFNGMDFN_OAMNPIONOHM_CTOR_OFFSET UNITYSDK_OFFSET(0x2E82200)

inline static constexpr unsigned int IJPDFNGMDFN_OAMNPIONOHM_TypeDefinitionIndex = 58491;

	struct alignas(8) IJPDFNGMDFN_OAMNPIONOHM
	{
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Single IDKONBFPBLH; // 0x18
		::System::Single HJLCCAJJIPH; // 0x1C
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IJPDFNGMDFN_OAMNPIONOHM_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};

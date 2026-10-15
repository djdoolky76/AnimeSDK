#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TutorialB51RacingGameButtonType.h"

#define AIJMAGPODFP_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)

inline static constexpr unsigned int AIJMAGPODFP_TypeDefinitionIndex = 58811;

	struct alignas(4) AIJMAGPODFP
	{
		::RPG::GameCore::TutorialB51RacingGameButtonType PGOHOFMMIAJ; // 0x10
		::System::Void _ctor(::RPG::GameCore::TutorialB51RacingGameButtonType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialB51RacingGameButtonType))((::PBYTE)hIl2Cpp + AIJMAGPODFP_CTOR_OFFSET))(this, a1);
		}

	};

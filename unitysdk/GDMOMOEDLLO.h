#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }

inline static constexpr unsigned int GDMOMOEDLLO_TypeDefinitionIndex = 57718;

	struct alignas(8) GDMOMOEDLLO
	{
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::RPG::GameCore::AliveState CEAFCCKCCDK; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint INHFEOMMHKJ; // 0x20
		::RPG::GameCore::FixPoint OHLNBIFAELP; // 0x28
	};

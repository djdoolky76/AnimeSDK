#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }

inline static constexpr unsigned int OCHDFAMDPDM_TypeDefinitionIndex = 60132;

	struct alignas(8) OCHDFAMDPDM
	{
		::System::Single PHHHLECAJNK; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::GameEntity* IIPDCIMHGGH; // 0x18
	};

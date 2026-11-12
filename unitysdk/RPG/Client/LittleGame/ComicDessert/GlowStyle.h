#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int GlowStyle_TypeDefinitionIndex = 79925;

	struct alignas(4) GlowStyle
	{
		::UnityEngine::Color Color; // 0x10
		::System::Single Intensity; // 0x20
		::System::Single Range; // 0x24
	};
}

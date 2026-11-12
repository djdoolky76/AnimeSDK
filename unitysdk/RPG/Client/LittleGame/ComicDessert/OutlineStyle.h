#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int OutlineStyle_TypeDefinitionIndex = 79924;

	struct alignas(4) OutlineStyle
	{
		::UnityEngine::Color Color; // 0x10
		::System::Single BlurSize; // 0x20
		::System::Int32 Downsample; // 0x24
	};
}

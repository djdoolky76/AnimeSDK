#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::TextCore::Text { class FontAsset; }

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int FontWeightPair_TypeDefinitionIndex = 18733;

	struct alignas(8) FontWeightPair
	{
		::UnityEngine::TextCore::Text::FontAsset* regularTypeface; // 0x10
		::UnityEngine::TextCore::Text::FontAsset* italicTypeface; // 0x18
	};
}

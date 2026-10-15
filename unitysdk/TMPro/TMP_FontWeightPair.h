#pragma once
#include "unitysdk/unitysdk.h"
namespace TMPro { class TMP_FontAsset; }

namespace TMPro
{
	struct alignas(8) TMP_FontWeightPair
	{
		::TMPro::TMP_FontAsset* regularTypeface; // 0x10
		::TMPro::TMP_FontAsset* italicTypeface; // 0x18
	};
}

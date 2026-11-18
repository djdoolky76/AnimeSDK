#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISnakeEndingAnimScript_NLGBBMHKAFJ.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class RectTransform; }

namespace MoleMole
{
	inline static constexpr unsigned int UISnakeEndingAnimScript_BlackBorderMapping_TypeDefinitionIndex = 96634;

	struct alignas(8) UISnakeEndingAnimScript_BlackBorderMapping
	{
		// static const ::System::Single PosXOffset; // 0x0
		::UnityEngine::RectTransform* rectSource; // 0x10
		::UnityEngine::RectTransform* rectBlackBorder; // 0x18
		::System::Single offset; // 0x20
		::MoleMole::UISnakeEndingAnimScript_NLGBBMHKAFJ type; // 0x24
	};
}

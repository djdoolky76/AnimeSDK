#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Font; }
namespace UnityEngine::TextCore::Text { class FontAsset; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_FONTREFERENCEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAECF0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextSettings_FontReferenceMap_TypeDefinitionIndex = 18723;

	struct alignas(8) TextSettings_FontReferenceMap
	{
		::UnityEngine::Font* font; // 0x10
		::UnityEngine::TextCore::Text::FontAsset* fontAsset; // 0x18

		::System::Void _ctor(::UnityEngine::Font* B1DC954065577781, ::UnityEngine::TextCore::Text::FontAsset* A04B97A6BA51CC83)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*, ::UnityEngine::TextCore::Text::FontAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_FONTREFERENCEMAP__CTOR_OFFSET))(this, B1DC954065577781, A04B97A6BA51CC83);
		}
	};
}

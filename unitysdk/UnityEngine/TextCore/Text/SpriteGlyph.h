#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/TextCore/Glyph.h"

namespace UnityEngine { class Sprite; }

#define UNITYENGINE_TEXTCORE_TEXT_SPRITEGLYPH__CTOR_OFFSET UNITYSDK_OFFSET(0x40C0900)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int SpriteGlyph_TypeDefinitionIndex = 18769;

	class SpriteGlyph : public ::UnityEngine::TextCore::Glyph
	{
	public:
		::UnityEngine::Sprite* sprite; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEGLYPH__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/TextCore/Glyph.h"

namespace UnityEngine { class Sprite; }

#define TMPRO_TMP_SPRITEGLYPH__CTOR_OFFSET UNITYSDK_OFFSET(0x40C0900)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteGlyph_TypeDefinitionIndex = 18276;

	class TMP_SpriteGlyph : public ::UnityEngine::TextCore::Glyph
	{
	public:
		::UnityEngine::Sprite* sprite; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEGLYPH__CTOR_OFFSET))(this);
		}
	};
}

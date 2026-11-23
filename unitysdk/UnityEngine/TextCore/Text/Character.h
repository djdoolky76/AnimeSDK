#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/TextCore/Text/TextElement.h"

namespace UnityEngine::TextCore { class Glyph; }
namespace UnityEngine::TextCore::Text { class FontAsset; }

#define UNITYENGINE_TEXTCORE_TEXT_CHARACTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x41EC3A0)
#define UNITYENGINE_TEXTCORE_TEXT_CHARACTER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x41EC430)
#define UNITYENGINE_TEXTCORE_TEXT_CHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x41EC400)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int Character_TypeDefinitionIndex = 18720;

	class Character : public ::UnityEngine::TextCore::Text::TextElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_CHARACTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 A8F53A76737F9A9C, ::System::UInt32 BDA6A4455F220F84)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_CHARACTER__CTOR_1_OFFSET))(this, A8F53A76737F9A9C, BDA6A4455F220F84);
		}

		::System::Void _ctor_2(::System::UInt32 A8F53A76737F9A9C, ::UnityEngine::TextCore::Text::FontAsset* A04B97A6BA51CC83, ::UnityEngine::TextCore::Glyph* EE5806B81CBB2541)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::TextCore::Text::FontAsset*, ::UnityEngine::TextCore::Glyph*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_CHARACTER__CTOR_2_OFFSET))(this, A8F53A76737F9A9C, A04B97A6BA51CC83, EE5806B81CBB2541);
		}
	};
}

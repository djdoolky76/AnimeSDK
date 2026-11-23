#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A7C4D8DC50C86DC6/B5EFF3110AD0606F.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::TextCore { class Glyph; }
namespace UnityEngine::TextCore::Text { class TextAsset; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_ELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x38FAA40)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x27C87C0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_GLYPH_OFFSET UNITYSDK_OFFSET(0x3A4AA60)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x41A9C10)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_TEXTASSET_OFFSET UNITYSDK_OFFSET(0x3559240)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_UNICODE_OFFSET UNITYSDK_OFFSET(0x3558B30)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x1983150)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_GLYPH_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x1F32600)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_TEXTASSET_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_UNICODE_OFFSET UNITYSDK_OFFSET(0x19DB800)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextElement_TypeDefinitionIndex = 18735;

	class TextElement : public ::System::Object
	{
	public:
		::A7C4D8DC50C86DC6::B5EFF3110AD0606F m_ElementType; // 0x10
		::System::UInt32 m_Unicode; // 0x14
		::UnityEngine::TextCore::Text::TextAsset* m_TextAsset; // 0x18
		::UnityEngine::TextCore::Glyph* m_Glyph; // 0x20
		::System::UInt32 m_GlyphIndex; // 0x28
		::System::Single m_Scale; // 0x2C

		::System::Void set_glyphIndex(::System::UInt32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_GLYPHINDEX_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_textAsset(::UnityEngine::TextCore::Text::TextAsset* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::Text::TextAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_TEXTASSET_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::UInt32 get_glyphIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_GLYPHINDEX_OFFSET))(this);
		}

		::System::UInt32 get_unicode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_UNICODE_OFFSET))(this);
		}

		::System::Single get_scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_SCALE_OFFSET))(this);
		}

		::UnityEngine::TextCore::Glyph* get_glyph()
		{
			return ((::UnityEngine::TextCore::Glyph*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_GLYPH_OFFSET))(this);
		}

		::System::Void set_glyph(::UnityEngine::TextCore::Glyph* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::Glyph*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_GLYPH_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_scale(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_SCALE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT__CTOR_OFFSET))(this);
		}

		::UnityEngine::TextCore::Text::TextAsset* get_textAsset()
		{
			return ((::UnityEngine::TextCore::Text::TextAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_TEXTASSET_OFFSET))(this);
		}

		::A7C4D8DC50C86DC6::B5EFF3110AD0606F get_elementType()
		{
			return ((::A7C4D8DC50C86DC6::B5EFF3110AD0606F(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_ELEMENTTYPE_OFFSET))(this);
		}

		::System::Void set_unicode(::System::UInt32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_UNICODE_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}

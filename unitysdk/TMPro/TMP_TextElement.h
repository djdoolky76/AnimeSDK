#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B311069BAD7789F5/B5EFF3110AD0606F.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class TMP_Asset; }
namespace UnityEngine::TextCore { class Glyph; }

#define TMPRO_TMP_TEXTELEMENT_GET_ELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x16F77C0)
#define TMPRO_TMP_TEXTELEMENT_GET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x18E4420)
#define TMPRO_TMP_TEXTELEMENT_GET_GLYPH_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define TMPRO_TMP_TEXTELEMENT_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x233F9A0)
#define TMPRO_TMP_TEXTELEMENT_GET_TEXTASSET_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define TMPRO_TMP_TEXTELEMENT_GET_UNICODE_OFFSET UNITYSDK_OFFSET(0x19DB7F0)
#define TMPRO_TMP_TEXTELEMENT_SET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x1983150)
#define TMPRO_TMP_TEXTELEMENT_SET_GLYPH_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define TMPRO_TMP_TEXTELEMENT_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x1F32600)
#define TMPRO_TMP_TEXTELEMENT_SET_TEXTASSET_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define TMPRO_TMP_TEXTELEMENT_SET_UNICODE_OFFSET UNITYSDK_OFFSET(0x19DB800)
#define TMPRO_TMP_TEXTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextElement_TypeDefinitionIndex = 18197;

	class TMP_TextElement : public ::System::Object
	{
	public:
		::B311069BAD7789F5::B5EFF3110AD0606F m_ElementType; // 0x10
		::System::UInt32 m_Unicode; // 0x14
		::TMPro::TMP_Asset* m_TextAsset; // 0x18
		::UnityEngine::TextCore::Glyph* m_Glyph; // 0x20
		::System::UInt32 m_GlyphIndex; // 0x28
		::System::Single m_Scale; // 0x2C

		::System::Void set_scale(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_SET_SCALE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::TMPro::TMP_Asset* get_textAsset()
		{
			return ((::TMPro::TMP_Asset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_TEXTASSET_OFFSET))(this);
		}

		::System::UInt32 get_glyphIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_GLYPHINDEX_OFFSET))(this);
		}

		::System::Void set_glyphIndex(::System::UInt32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_SET_GLYPHINDEX_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::TextCore::Glyph* get_glyph()
		{
			return ((::UnityEngine::TextCore::Glyph*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_GLYPH_OFFSET))(this);
		}

		::System::UInt32 get_unicode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_UNICODE_OFFSET))(this);
		}

		::B311069BAD7789F5::B5EFF3110AD0606F get_elementType()
		{
			return ((::B311069BAD7789F5::B5EFF3110AD0606F(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_ELEMENTTYPE_OFFSET))(this);
		}

		::System::Void set_textAsset(::TMPro::TMP_Asset* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Asset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_SET_TEXTASSET_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_unicode(::System::UInt32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_SET_UNICODE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void set_glyph(::UnityEngine::TextCore::Glyph* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::Glyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_SET_GLYPH_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_SCALE_OFFSET))(this);
		}
	};
}

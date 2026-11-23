#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E859BAD9AEF40D25/A78A967A9BF8283B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextCore/GlyphMetrics.h"
#include "unitysdk/UnityEngine/TextCore/GlyphRect.h"
#include "unitysdk/AC0F03344772DE8E/F733A9116C25172F.h"

#define UNITYENGINE_TEXTCORE_GLYPH_GET_ATLASINDEX_OFFSET UNITYSDK_OFFSET(0x41CD030)
#define UNITYENGINE_TEXTCORE_GLYPH_GET_GLYPHRECT_OFFSET UNITYSDK_OFFSET(0x41CD040)
#define UNITYENGINE_TEXTCORE_GLYPH_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x410ACF0)
#define UNITYENGINE_TEXTCORE_GLYPH_GET_METRICS_OFFSET UNITYSDK_OFFSET(0x41CCBF0)
#define UNITYENGINE_TEXTCORE_GLYPH_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x40672F0)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_ATLASINDEX_OFFSET UNITYSDK_OFFSET(0x1AFB120)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_GLYPHRECT_OFFSET UNITYSDK_OFFSET(0x235F3A0)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_METRICS_OFFSET UNITYSDK_OFFSET(0x41CD050)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x173A950)
#define UNITYENGINE_TEXTCORE_GLYPH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x41CCF30)
#define UNITYENGINE_TEXTCORE_GLYPH__CTOR_2_OFFSET UNITYSDK_OFFSET(0x41CCF80)
#define UNITYENGINE_TEXTCORE_GLYPH__CTOR_OFFSET UNITYSDK_OFFSET(0x41CCFF0)

namespace UnityEngine::TextCore
{
	inline static constexpr unsigned int Glyph_TypeDefinitionIndex = 21203;

	class Glyph : public ::System::Object
	{
	public:
		::System::UInt32 m_Index; // 0x10
		::UnityEngine::TextCore::GlyphMetrics m_Metrics; // 0x14
		::UnityEngine::TextCore::GlyphRect m_GlyphRect; // 0x28
		::System::Single m_Scale; // 0x38
		::System::Int32 m_AtlasIndex; // 0x3C
		::E859BAD9AEF40D25::A78A967A9BF8283B m_ClassDefinitionType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH__CTOR_OFFSET))(this);
		}

		::System::Void set_atlasIndex(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_ATLASINDEX_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Int32 get_atlasIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_ATLASINDEX_OFFSET))(this);
		}

		::System::Void _ctor_1(::AC0F03344772DE8E::F733A9116C25172F AAC5DF3E820B6D32)
		{
			return ((::System::Void(*)(::PVOID, ::AC0F03344772DE8E::F733A9116C25172F))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH__CTOR_1_OFFSET))(this, AAC5DF3E820B6D32);
		}

		::UnityEngine::TextCore::GlyphRect get_glyphRect()
		{
			return ((::UnityEngine::TextCore::GlyphRect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_GLYPHRECT_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::UInt32 B48C66E5FB2449C6, ::UnityEngine::TextCore::GlyphMetrics B6624D0A1F45B927, ::UnityEngine::TextCore::GlyphRect E1B7FAA0CF9BF939, ::System::Single A73B96BE7F2DEBF7, ::System::Int32 B260C716054B5830)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::TextCore::GlyphMetrics, ::UnityEngine::TextCore::GlyphRect, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH__CTOR_2_OFFSET))(this, B48C66E5FB2449C6, B6624D0A1F45B927, E1B7FAA0CF9BF939, A73B96BE7F2DEBF7, B260C716054B5830);
		}

		::System::Single get_scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_SCALE_OFFSET))(this);
		}

		::System::UInt32 get_index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_glyphRect(::UnityEngine::TextCore::GlyphRect E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::GlyphRect))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_GLYPHRECT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_index(::System::UInt32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_INDEX_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_scale(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_SCALE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::TextCore::GlyphMetrics get_metrics()
		{
			return ((::UnityEngine::TextCore::GlyphMetrics(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_METRICS_OFFSET))(this);
		}

		::System::Void set_metrics(::UnityEngine::TextCore::GlyphMetrics E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::GlyphMetrics))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_METRICS_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x41CC930)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_EQUALS_OFFSET UNITYSDK_OFFSET(0x41CC8A0)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x41CC9A0)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x39CC0F0)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALADVANCE_OFFSET UNITYSDK_OFFSET(0x4103AA0)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALBEARINGX_OFFSET UNITYSDK_OFFSET(0x40E9E60)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALBEARINGY_OFFSET UNITYSDK_OFFSET(0x4103AB0)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x39CC090)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS__CTOR_OFFSET UNITYSDK_OFFSET(0x41CCA00)

namespace UnityEngine::TextCore
{
	inline static constexpr unsigned int GlyphMetrics_TypeDefinitionIndex = 21202;

	struct alignas(4) GlyphMetrics
	{
		::System::Single m_Width; // 0x10
		::System::Single m_Height; // 0x14
		::System::Single m_HorizontalBearingX; // 0x18
		::System::Single m_HorizontalBearingY; // 0x1C
		::System::Single m_HorizontalAdvance; // 0x20

		::System::Single get_horizontalBearingX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALBEARINGX_OFFSET))(this);
		}

		::System::Void _ctor(::System::Single F5EF7E29767E03BF, ::System::Single F0961C93719F7B0D, ::System::Single A5B2DDCEDCF3D9D6, ::System::Single E19C5D63D0BA4A89, ::System::Single FB6B68091BAB83EB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS__CTOR_OFFSET))(this, F5EF7E29767E03BF, F0961C93719F7B0D, A5B2DDCEDCF3D9D6, E19C5D63D0BA4A89, FB6B68091BAB83EB);
		}

		/*
		::System::Boolean Equals(::UnityEngine::TextCore::GlyphMetrics BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextCore::GlyphMetrics))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_EQUALS_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HEIGHT_OFFSET))(this);
		}

		::System::Single get_width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_WIDTH_OFFSET))(this);
		}

		::System::Single get_horizontalAdvance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALADVANCE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_EQUALS_1_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GETHASHCODE_OFFSET))(this);
		}

		::System::Single get_horizontalBearingY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALBEARINGY_OFFSET))(this);
		}
	};
}

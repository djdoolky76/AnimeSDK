#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphValueRecord.h"

namespace System { class Object; }

#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x41CC7D0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_EQUALS_OFFSET UNITYSDK_OFFSET(0x41CC740)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x41CC840)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x40E9E70)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GET_GLYPHVALUERECORD_OFFSET UNITYSDK_OFFSET(0x41791E0)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphAdjustmentRecord_TypeDefinitionIndex = 21197;

	struct alignas(4) GlyphAdjustmentRecord
	{
		::System::UInt32 m_GlyphIndex; // 0x10
		::UnityEngine::TextCore::LowLevel::GlyphValueRecord m_GlyphValueRecord; // 0x14

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GETHASHCODE_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_EQUALS_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::System::UInt32 get_glyphIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GET_GLYPHINDEX_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_EQUALS_1_OFFSET))(this, A86A90C31A146E9C);
		}

		::UnityEngine::TextCore::LowLevel::GlyphValueRecord get_glyphValueRecord()
		{
			return ((::UnityEngine::TextCore::LowLevel::GlyphValueRecord(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GET_GLYPHVALUERECORD_OFFSET))(this);
		}
	};
}

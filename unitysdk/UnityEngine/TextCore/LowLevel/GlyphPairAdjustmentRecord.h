#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/FontFeatureLookupFlags.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphAdjustmentRecord.h"

#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GET_FIRSTADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0x304F5E0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GET_SECONDADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0x3ED6CC0)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphPairAdjustmentRecord_TypeDefinitionIndex = 5853;

	struct alignas(4) GlyphPairAdjustmentRecord
	{
		::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_FirstAdjustmentRecord; // 0x10
		::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_SecondAdjustmentRecord; // 0x24
		::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags m_FeatureLookupFlags; // 0x38
		::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_firstAdjustmentRecord()
		{
			return ((::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GET_FIRSTADJUSTMENTRECORD_OFFSET))(this);
		}

		::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_secondAdjustmentRecord()
		{
			return ((::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GET_SECONDADJUSTMENTRECORD_OFFSET))(this);
		}

	};
}

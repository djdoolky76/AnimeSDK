#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphAnchorPoint.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/MarkPositionAdjustment.h"

#define UNITYENGINE_TEXTCORE_LOWLEVEL_MARKTOMARKADJUSTMENTRECORD_GET_BASEMARKGLYPHANCHORPOINT_OFFSET UNITYSDK_OFFSET(0x41A9BF0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_MARKTOMARKADJUSTMENTRECORD_GET_BASEMARKGLYPHID_OFFSET UNITYSDK_OFFSET(0x40E9E70)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_MARKTOMARKADJUSTMENTRECORD_GET_COMBININGMARKGLYPHID_OFFSET UNITYSDK_OFFSET(0x2E84900)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_MARKTOMARKADJUSTMENTRECORD_GET_COMBININGMARKPOSITIONADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x41B16E0)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int MarkToMarkAdjustmentRecord_TypeDefinitionIndex = 21187;

	struct alignas(4) MarkToMarkAdjustmentRecord
	{
		::System::UInt32 m_BaseMarkGlyphID; // 0x10
		::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint m_BaseMarkGlyphAnchorPoint; // 0x14
		::System::UInt32 m_CombiningMarkGlyphID; // 0x1C
		::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment m_CombiningMarkPositionAdjustment; // 0x20

		::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment get_combiningMarkPositionAdjustment()
		{
			return ((::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_MARKTOMARKADJUSTMENTRECORD_GET_COMBININGMARKPOSITIONADJUSTMENT_OFFSET))(this);
		}

		::System::UInt32 get_baseMarkGlyphID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_MARKTOMARKADJUSTMENTRECORD_GET_BASEMARKGLYPHID_OFFSET))(this);
		}

		::System::UInt32 get_combiningMarkGlyphID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_MARKTOMARKADJUSTMENTRECORD_GET_COMBININGMARKGLYPHID_OFFSET))(this);
		}

		::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint get_baseMarkGlyphAnchorPoint()
		{
			return ((::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_MARKTOMARKADJUSTMENTRECORD_GET_BASEMARKGLYPHANCHORPOINT_OFFSET))(this);
		}
	};
}

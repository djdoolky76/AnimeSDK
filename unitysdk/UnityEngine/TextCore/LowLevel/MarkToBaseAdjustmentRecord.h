#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphAnchorPoint.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/MarkPositionAdjustment.h"

#define UNITYENGINE_TEXTCORE_LOWLEVEL_MARKTOBASEADJUSTMENTRECORD_GET_BASEGLYPHANCHORPOINT_OFFSET UNITYSDK_OFFSET(0x41A9BF0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_MARKTOBASEADJUSTMENTRECORD_GET_BASEGLYPHID_OFFSET UNITYSDK_OFFSET(0x40E9E70)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_MARKTOBASEADJUSTMENTRECORD_GET_MARKGLYPHID_OFFSET UNITYSDK_OFFSET(0x2E84900)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_MARKTOBASEADJUSTMENTRECORD_GET_MARKPOSITIONADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x41B16E0)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int MarkToBaseAdjustmentRecord_TypeDefinitionIndex = 21184;

	struct alignas(4) MarkToBaseAdjustmentRecord
	{
		::System::UInt32 m_BaseGlyphID; // 0x10
		::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint m_BaseGlyphAnchorPoint; // 0x14
		::System::UInt32 m_MarkGlyphID; // 0x1C
		::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment m_MarkPositionAdjustment; // 0x20

		::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint get_baseGlyphAnchorPoint()
		{
			return ((::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_MARKTOBASEADJUSTMENTRECORD_GET_BASEGLYPHANCHORPOINT_OFFSET))(this);
		}

		::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment get_markPositionAdjustment()
		{
			return ((::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_MARKTOBASEADJUSTMENTRECORD_GET_MARKPOSITIONADJUSTMENT_OFFSET))(this);
		}

		::System::UInt32 get_baseGlyphID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_MARKTOBASEADJUSTMENTRECORD_GET_BASEGLYPHID_OFFSET))(this);
		}

		::System::UInt32 get_markGlyphID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_MARKTOBASEADJUSTMENTRECORD_GET_MARKGLYPHID_OFFSET))(this);
		}
	};
}

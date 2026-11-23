#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_TEXTCORE_LOWLEVEL_MARKPOSITIONADJUSTMENT_GET_XPOSITIONADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x39CC090)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_MARKPOSITIONADJUSTMENT_GET_YPOSITIONADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x39CC0F0)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int MarkPositionAdjustment_TypeDefinitionIndex = 21194;

	struct alignas(4) MarkPositionAdjustment
	{
		::System::Single m_XPositionAdjustment; // 0x10
		::System::Single m_YPositionAdjustment; // 0x14

		::System::Single get_yPositionAdjustment()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_MARKPOSITIONADJUSTMENT_GET_YPOSITIONADJUSTMENT_OFFSET))(this);
		}

		::System::Single get_xPositionAdjustment()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_MARKPOSITIONADJUSTMENT_GET_XPOSITIONADJUSTMENT_OFFSET))(this);
		}
	};
}

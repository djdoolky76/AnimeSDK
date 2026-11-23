#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHANCHORPOINT_GET_XCOORDINATE_OFFSET UNITYSDK_OFFSET(0x39CC090)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHANCHORPOINT_GET_YCOORDINATE_OFFSET UNITYSDK_OFFSET(0x39CC0F0)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphAnchorPoint_TypeDefinitionIndex = 21185;

	struct alignas(4) GlyphAnchorPoint
	{
		::System::Single m_XCoordinate; // 0x10
		::System::Single m_YCoordinate; // 0x14

		::System::Single get_yCoordinate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHANCHORPOINT_GET_YCOORDINATE_OFFSET))(this);
		}

		::System::Single get_xCoordinate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHANCHORPOINT_GET_XCOORDINATE_OFFSET))(this);
		}
	};
}

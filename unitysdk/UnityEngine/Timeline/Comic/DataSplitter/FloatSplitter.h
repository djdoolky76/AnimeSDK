#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_FLOATSPLITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4872A0)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int FloatSplitter_TypeDefinitionIndex = 32559;

	class FloatSplitter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_FLOATSPLITTER__CTOR_OFFSET))(this);
		}
	};
}

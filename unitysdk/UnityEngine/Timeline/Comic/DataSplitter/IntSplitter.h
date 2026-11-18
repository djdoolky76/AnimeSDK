#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_INTSPLITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F596650)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int IntSplitter_TypeDefinitionIndex = 32561;

	class IntSplitter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_INTSPLITTER__CTOR_OFFSET))(this);
		}
	};
}

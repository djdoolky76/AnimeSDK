#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_AUDIOCONTENTLISTSPLITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6E22B0)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int AudioContentListSplitter_TypeDefinitionIndex = 32553;

	class AudioContentListSplitter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_AUDIOCONTENTLISTSPLITTER__CTOR_OFFSET))(this);
		}
	};
}

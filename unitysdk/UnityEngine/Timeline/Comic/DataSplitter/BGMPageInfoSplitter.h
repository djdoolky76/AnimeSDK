#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFOSPLITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF1AD50)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int BGMPageInfoSplitter_TypeDefinitionIndex = 32557;

	class BGMPageInfoSplitter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFOSPLITTER__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATASPLITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1BBF70)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int PageDataSplitter_TypeDefinitionIndex = 32564;

	class PageDataSplitter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_PAGEDATASPLITTER__CTOR_OFFSET))(this);
		}
	};
}

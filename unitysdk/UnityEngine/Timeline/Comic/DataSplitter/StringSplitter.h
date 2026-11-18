#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_STRINGSPLITTER_CLEARIMP_OFFSET UNITYSDK_OFFSET(0x1FCC0BC0)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_STRINGSPLITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCC0ED0)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int StringSplitter_TypeDefinitionIndex = 32566;

	class StringSplitter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_STRINGSPLITTER__CTOR_OFFSET))(this);
		}

		::System::Void ClearImp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_STRINGSPLITTER_CLEARIMP_OFFSET))(this);
		}
	};
}

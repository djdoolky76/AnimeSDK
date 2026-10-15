#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::Rendering { class QueueData; }

#define UNITYENGINE_RENDERING_BASICQUEUE_HASDATA_OFFSET UNITYSDK_OFFSET(0xE630)

namespace UnityEngine::Rendering
{
	struct alignas(8) BasicQueue
	{
		::UnityEngine::Rendering::QueueData* root; // 0x10
		::System::Int32 count; // 0x18
		::System::Boolean HasData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BASICQUEUE_HASDATA_OFFSET))(this);
		}

	};
}

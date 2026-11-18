#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_TIMELINE_PAUSEWAITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD8FED0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int PauseWaitInfo_TypeDefinitionIndex = 32425;

	class PauseWaitInfo : public ::System::Object
	{
	public:
		::System::Double durationTime; // 0x10
		::System::Double endTime; // 0x18
		::System::Double startTime; // 0x20

		::System::Void _ctor(::System::Double startTime, ::System::Double durationTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PAUSEWAITINFO__CTOR_OFFSET))(this, startTime, durationTime);
		}
	};
}

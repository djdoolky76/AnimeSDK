#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_METHOD_LOOPINTERVAL_GET_INTERVALINLOOP_OFFSET UNITYSDK_OFFSET(0x921FC0)

namespace PipelineCamera
{
	inline static constexpr unsigned int Method_LoopInterval_TypeDefinitionIndex = 36153;

	struct alignas(8) Method_LoopInterval
	{
		::System::Single Start; // 0x10
		::Foundation::Unreal::Interval_1<::System::Single> Interval; // 0x14

		::Foundation::Unreal::Interval_1<::System::Single> get_IntervalInLoop()
		{
			return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD_LOOPINTERVAL_GET_INTERVALINLOOP_OFFSET))(this);
		}
	};
}

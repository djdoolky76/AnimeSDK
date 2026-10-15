#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/ScheduleMode.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_JOBSCHEDULEPARAMETERS_CTOR_OFFSET UNITYSDK_OFFSET(0x3C6AF40)

namespace Unity::Jobs::LowLevel::Unsafe
{
	struct alignas(4) JobsUtility_JobScheduleParameters
	{
		::Unity::Jobs::JobHandle Dependency; // 0x10
		::System::Int32 ScheduleMode; // 0x20
		::System::Byte _padding0[0x4];
		::System::IntPtr ReflectionData; // 0x28
		::System::IntPtr JobDataPtr; // 0x30
		::System::Void _ctor(::PVOID a1, ::System::IntPtr a2, ::Unity::Jobs::JobHandle a3, ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::IntPtr, ::Unity::Jobs::JobHandle, ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_JOBSCHEDULEPARAMETERS_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}

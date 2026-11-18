#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"

#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA4550)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_OFFSET UNITYSDK_OFFSET(0x1EDA4450)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNALPTR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA4560)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNALPTR_OFFSET UNITYSDK_OFFSET(0x1EDA44D0)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_1_OFFSET UNITYSDK_OFFSET(0x1EDA4490)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_2_OFFSET UNITYSDK_OFFSET(0x1EDA4510)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1EDA4410)
#define UNITY_JOBS_JOBHANDLE_COMPLETEALL_OFFSET UNITYSDK_OFFSET(0x1EDA43B0)
#define UNITY_JOBS_JOBHANDLE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x935C90)
#define UNITY_JOBS_JOBHANDLE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x935CB0)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDCOMPLETEALL_OFFSET UNITYSDK_OFFSET(0x1EDA43D0)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1EDA43A0)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EDA43F0)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBS_OFFSET UNITYSDK_OFFSET(0x1EDA4400)

namespace Unity::Jobs
{
	inline static constexpr unsigned int JobHandle_TypeDefinitionIndex = 5060;

	struct alignas(4) JobHandle
	{
		::System::IntPtr jobGroup; // 0x10
		::System::Int32 version; // 0x18

		::System::Void Complete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMPLETE_OFFSET))(this);
		}

		/*
		static ::System::Void CompleteAll(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> jobs)
		{
			return ((::System::Void(*)(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMPLETEALL_OFFSET))(jobs);
		}
		*/

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_GET_ISCOMPLETED_OFFSET))(this);
		}

		static ::System::Void ScheduleBatchedJobs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBS_OFFSET))();
		}

		/*
		static ::System::Void ScheduleBatchedJobsAndComplete(::Unity::Jobs::JobHandle& job)
		{
			return ((::System::Void(*)(::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDCOMPLETE_OFFSET))(job);
		}
		*/

		/*
		static ::System::Boolean ScheduleBatchedJobsAndIsCompleted(::Unity::Jobs::JobHandle& job)
		{
			return ((::System::Boolean(*)(::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDISCOMPLETED_OFFSET))(job);
		}
		*/

		static ::System::Void ScheduleBatchedJobsAndCompleteAll(::PVOID jobs, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDCOMPLETEALL_OFFSET))(jobs, count);
		}

		/*
		static ::Unity::Jobs::JobHandle CombineDependencies(::Unity::Jobs::JobHandle job0, ::Unity::Jobs::JobHandle job1)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::JobHandle, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_OFFSET))(job0, job1);
		}
		*/

		/*
		static ::Unity::Jobs::JobHandle CombineDependencies_1(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> jobs)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_1_OFFSET))(jobs);
		}
		*/

		/*
		static ::Unity::Jobs::JobHandle CombineDependencies_2(::Unity::Collections::NativeSlice_1<::Unity::Jobs::JobHandle> jobs)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Collections::NativeSlice_1<::Unity::Jobs::JobHandle>))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_2_OFFSET))(jobs);
		}
		*/

		/*
		static ::Unity::Jobs::JobHandle CombineDependenciesInternal2(::Unity::Jobs::JobHandle& job0, ::Unity::Jobs::JobHandle& job1)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::JobHandle&, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_OFFSET))(job0, job1);
		}
		*/

		/*
		static ::Unity::Jobs::JobHandle CombineDependenciesInternalPtr(::PVOID jobs, ::System::Int32 count)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNALPTR_OFFSET))(jobs, count);
		}
		*/

		/*
		static ::System::Void CombineDependenciesInternal2_Injected(::Unity::Jobs::JobHandle& job0, ::Unity::Jobs::JobHandle& job1, ::Unity::Jobs::JobHandle& ret)
		{
			return ((::System::Void(*)(::Unity::Jobs::JobHandle&, ::Unity::Jobs::JobHandle&, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_INJECTED_OFFSET))(job0, job1, ret);
		}
		*/

		/*
		static ::System::Void CombineDependenciesInternalPtr_Injected(::PVOID jobs, ::System::Int32 count, ::Unity::Jobs::JobHandle& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNALPTR_INJECTED_OFFSET))(jobs, count, ret);
		}
		*/
	};
}

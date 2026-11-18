#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading { class ThreadAbortException; }

#define SYSTEM_THREADING_SEMAPHORESLIM_TASKNODE_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x1D1CE1C0)
#define SYSTEM_THREADING_SEMAPHORESLIM_TASKNODE_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x1D1CE1D0)
#define SYSTEM_THREADING_SEMAPHORESLIM_TASKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CE120)

namespace System::Threading
{
	inline static constexpr unsigned int SemaphoreSlim_TaskNode_TypeDefinitionIndex = 795;

	class SemaphoreSlim_TaskNode
	{
	public:
		::System::Threading::SemaphoreSlim_TaskNode* Next; // 0x50
		::System::Threading::SemaphoreSlim_TaskNode* Prev; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_TASKNODE__CTOR_OFFSET))(this);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_TASKNODE_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET))(this);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadAbortException*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_TASKNODE_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET))(this, tae);
		}
	};
}

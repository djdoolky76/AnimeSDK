#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Threading { class SemaphoreSlim_TaskNode; }
namespace System::Threading { class ThreadAbortException; }

#define SYSTEM_THREADING_SEMAPHORESLIM_TASKNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C14BC70)
#define SYSTEM_THREADING_SEMAPHORESLIM_TASKNODE_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x1C14CCD0)
#define SYSTEM_THREADING_SEMAPHORESLIM_TASKNODE_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x1C14CCE0)

namespace System::Threading
{
	class SemaphoreSlim_TaskNode
	{
	public:
		::System::Threading::SemaphoreSlim_TaskNode* Prev; // 0x50
		::System::Threading::SemaphoreSlim_TaskNode* Next; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_TASKNODE_CTOR_OFFSET))(this);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_TASKNODE_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET))(this);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadAbortException*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_TASKNODE_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET))(this, a1);
		}

	};
}

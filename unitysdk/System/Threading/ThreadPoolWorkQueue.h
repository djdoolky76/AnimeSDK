#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Threading { class IThreadPoolWorkItem; }
namespace System::Threading { class ThreadPoolWorkQueueThreadLocals; }
namespace System::Threading { class ThreadPoolWorkQueue_QueueSegment; }

#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C162870)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C160EC0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_DEQUEUE_OFFSET UNITYSDK_OFFSET(0x1C161B60)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_DISPATCH_OFFSET UNITYSDK_OFFSET(0x1C1621A0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x1C160A70)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENSURECURRENTTHREADHASQUEUE_OFFSET UNITYSDK_OFFSET(0x1C160F40)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENSURETHREADREQUESTED_OFFSET UNITYSDK_OFFSET(0x1C161180)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_LOCALFINDANDPOP_OFFSET UNITYSDK_OFFSET(0x1C160C30)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_MARKTHREADREQUESTSATISFIED_OFFSET UNITYSDK_OFFSET(0x1C1611E0)

namespace System::Threading
{
	class ThreadPoolWorkQueue : public ::System::Object
	{
	public:
		::System::Threading::ThreadPoolWorkQueue_QueueSegment* queueHead; // 0x10
		::System::Threading::ThreadPoolWorkQueue_QueueSegment* queueTail; // 0x18
		::System::Int32 numOutstandingThreadRequests; // 0x20
		static ::System::Object** StaticGet_allThreadQueues()
		{
			return (::System::Object**)UnitySDK::FromName("System.Threading", "ThreadPoolWorkQueue")->GetStaticField(0x215C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_CCTOR_OFFSET))();
		}

		::System::Threading::ThreadPoolWorkQueueThreadLocals* EnsureCurrentThreadHasQueue()
		{
			return ((::System::Threading::ThreadPoolWorkQueueThreadLocals*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENSURECURRENTTHREADHASQUEUE_OFFSET))(this);
		}

		::System::Void EnsureThreadRequested()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENSURETHREADREQUESTED_OFFSET))(this);
		}

		::System::Void MarkThreadRequestSatisfied()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_MARKTHREADREQUESTSATISFIED_OFFSET))(this);
		}

		::System::Void Enqueue(::System::Threading::IThreadPoolWorkItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENQUEUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean LocalFindAndPop(::System::Threading::IThreadPoolWorkItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_LOCALFINDANDPOP_OFFSET))(this, a1);
		}

		::System::Void Dequeue(::System::Threading::ThreadPoolWorkQueueThreadLocals* a1, ::System::Threading::IThreadPoolWorkItem* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadPoolWorkQueueThreadLocals*, ::System::Threading::IThreadPoolWorkItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_DEQUEUE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean Dispatch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_DISPATCH_OFFSET))();
		}

	};
}

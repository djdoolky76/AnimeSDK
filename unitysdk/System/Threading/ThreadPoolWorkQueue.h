#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class IThreadPoolWorkItem; }
namespace System::Threading { class ThreadPoolWorkQueueThreadLocals; }
namespace System::Threading { class ThreadPoolWorkQueue_QueueSegment; }

#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_DEQUEUE_OFFSET UNITYSDK_OFFSET(0x1DB67F00)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_DISPATCH_OFFSET UNITYSDK_OFFSET(0x1DB68110)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x1DB67C30)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENSURECURRENTTHREADHASQUEUE_OFFSET UNITYSDK_OFFSET(0x1DB67890)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENSURETHREADREQUESTED_OFFSET UNITYSDK_OFFSET(0x1DB67B80)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_LOCALFINDANDPOP_OFFSET UNITYSDK_OFFSET(0x1DB67E70)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_MARKTHREADREQUESTSATISFIED_OFFSET UNITYSDK_OFFSET(0x1DB67C00)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB68720)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB67810)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPoolWorkQueue_TypeDefinitionIndex = 843;

	class ThreadPoolWorkQueue : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_allThreadQueues()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ThreadPoolWorkQueue_TypeDefinitionIndex)->GetStaticField(0x980);
		}
		::System::Threading::ThreadPoolWorkQueue_QueueSegment* queueTail; // 0x10
		::System::Threading::ThreadPoolWorkQueue_QueueSegment* queueHead; // 0x18
		::System::Int32 numOutstandingThreadRequests; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE__CCTOR_OFFSET))();
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

		::System::Void Enqueue(::System::Threading::IThreadPoolWorkItem* callback, ::System::Boolean forceGlobal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENQUEUE_OFFSET))(this, callback, forceGlobal);
		}

		::System::Boolean LocalFindAndPop(::System::Threading::IThreadPoolWorkItem* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_LOCALFINDANDPOP_OFFSET))(this, callback);
		}

		::System::Void Dequeue(::System::Threading::ThreadPoolWorkQueueThreadLocals* tl, ::System::Threading::IThreadPoolWorkItem*& callback, ::System::Boolean& missedSteal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadPoolWorkQueueThreadLocals*, ::System::Threading::IThreadPoolWorkItem*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_DEQUEUE_OFFSET))(this, tl, callback, missedSteal);
		}

		static ::System::Boolean Dispatch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_DISPATCH_OFFSET))();
		}
	};
}

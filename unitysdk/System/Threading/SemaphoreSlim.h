#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class SemaphoreSlim_TaskNode; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_SEMAPHORESLIM_CANCELLATIONTOKENCANCELEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1C14C230)
#define SYSTEM_THREADING_SEMAPHORESLIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C14C320)
#define SYSTEM_THREADING_SEMAPHORESLIM_CHECKDISPOSE_OFFSET UNITYSDK_OFFSET(0x1C14B260)
#define SYSTEM_THREADING_SEMAPHORESLIM_CREATEANDADDASYNCWAITER_OFFSET UNITYSDK_OFFSET(0x1C14BA40)
#define SYSTEM_THREADING_SEMAPHORESLIM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C14AA40)
#define SYSTEM_THREADING_SEMAPHORESLIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C14AA30)
#define SYSTEM_THREADING_SEMAPHORESLIM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C14C1E0)
#define SYSTEM_THREADING_SEMAPHORESLIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C14C100)
#define SYSTEM_THREADING_SEMAPHORESLIM_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x1C14AB50)
#define SYSTEM_THREADING_SEMAPHORESLIM_GET_CURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C14AA20)
#define SYSTEM_THREADING_SEMAPHORESLIM_QUEUEWAITERTASK_OFFSET UNITYSDK_OFFSET(0x1C14C0F0)
#define SYSTEM_THREADING_SEMAPHORESLIM_RELEASE_1_OFFSET UNITYSDK_OFFSET(0x1C14BD90)
#define SYSTEM_THREADING_SEMAPHORESLIM_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C14BD80)
#define SYSTEM_THREADING_SEMAPHORESLIM_REMOVEASYNCWAITER_OFFSET UNITYSDK_OFFSET(0x1C14BCF0)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAITASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C14B350)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAITASYNC_OFFSET UNITYSDK_OFFSET(0x1C14BA30)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAITUNTILCOUNTORTIMEOUTASYNC_OFFSET UNITYSDK_OFFSET(0x1C14BB10)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAITUNTILCOUNTORTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C14B720)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAIT_1_OFFSET UNITYSDK_OFFSET(0x1C14B250)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAIT_2_OFFSET UNITYSDK_OFFSET(0x1C14AB70)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAIT_OFFSET UNITYSDK_OFFSET(0x1C14AB60)

namespace System::Threading
{
	class SemaphoreSlim : public ::System::Object
	{
	public:
		::System::Object* m_lockObj; // 0x10
		::System::Threading::ManualResetEvent* m_waitHandle; // 0x18
		::System::Threading::SemaphoreSlim_TaskNode* m_asyncHead; // 0x20
		::System::Threading::SemaphoreSlim_TaskNode* m_asyncTail; // 0x28
		::System::Int32 m_currentCount; // 0x30
		::System::Int32 m_waitCount; // 0x34
		::System::Int32 m_maxCount; // 0x38
		static ::System::Threading::Tasks::Task** StaticGet_s_trueTask()
		{
			return (::System::Threading::Tasks::Task**)UnitySDK::FromName("System.Threading", "SemaphoreSlim")->GetStaticField(0x1FD90);
		}

		static ::System::Action** StaticGet_s_cancellationTokenCanceledEventHandler()
		{
			return (::System::Action**)UnitySDK::FromName("System.Threading", "SemaphoreSlim")->GetStaticField(0x1FD98);
		}

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_CCTOR_OFFSET))();
		}

		::System::Int32 get_CurrentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_GET_CURRENTCOUNT_OFFSET))(this);
		}

		::System::Void Wait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAIT_OFFSET))(this);
		}

		::System::Boolean Wait_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAIT_1_OFFSET))(this, a1);
		}

		::System::Boolean Wait_2(::System::Int32 a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAIT_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean WaitUntilCountOrTimeout(::System::Int32 a1, ::System::UInt32 a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAITUNTILCOUNTORTIMEOUT_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task* WaitAsync()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAITASYNC_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* WaitAsync_1(::System::Int32 a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAITASYNC_1_OFFSET))(this, a1, a2);
		}

		::System::Threading::SemaphoreSlim_TaskNode* CreateAndAddAsyncWaiter()
		{
			return ((::System::Threading::SemaphoreSlim_TaskNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_CREATEANDADDASYNCWAITER_OFFSET))(this);
		}

		::System::Boolean RemoveAsyncWaiter(::System::Threading::SemaphoreSlim_TaskNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::SemaphoreSlim_TaskNode*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_REMOVEASYNCWAITER_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task* WaitUntilCountOrTimeoutAsync(::System::Threading::SemaphoreSlim_TaskNode* a1, ::System::Int32 a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Threading::SemaphoreSlim_TaskNode*, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAITUNTILCOUNTORTIMEOUTASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Release()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_RELEASE_OFFSET))(this);
		}

		::System::Int32 Release_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_RELEASE_1_OFFSET))(this, a1);
		}

		static ::System::Void QueueWaiterTask(::System::Threading::SemaphoreSlim_TaskNode* a1)
		{
			return ((::System::Void(*)(::System::Threading::SemaphoreSlim_TaskNode*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_QUEUEWAITERTASK_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_DISPOSE_1_OFFSET))(this, a1);
		}

		static ::System::Void CancellationTokenCanceledEventHandler(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_CANCELLATIONTOKENCANCELEDEVENTHANDLER_OFFSET))(a1);
		}

		::System::Void CheckDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_CHECKDISPOSE_OFFSET))(this);
		}

		static ::System::String* GetResourceString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_GETRESOURCESTRING_OFFSET))(a1);
		}

	};
}

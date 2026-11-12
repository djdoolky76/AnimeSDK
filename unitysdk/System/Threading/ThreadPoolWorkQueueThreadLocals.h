#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Random; }
namespace System::Threading { class ThreadPoolWorkQueue; }
namespace System::Threading { class ThreadPoolWorkQueueThreadLocals; }
namespace System::Threading { class ThreadPoolWorkQueue_WorkStealingQueue; }

#define SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1D2E9FB0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E8380)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D2EA080)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPoolWorkQueueThreadLocals_TypeDefinitionIndex = 862;

	class ThreadPoolWorkQueueThreadLocals : public ::System::Object
	{
	public:
		::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue* workStealingQueue; // 0x10
		::System::Threading::ThreadPoolWorkQueue* workQueue; // 0x18
		::System::Random* random; // 0x20
		static ::System::Threading::ThreadPoolWorkQueueThreadLocals** StaticGet_threadLocals()
		{
			return (::System::Threading::ThreadPoolWorkQueueThreadLocals**)UnitySDK::FromName("System.Threading", "ThreadPoolWorkQueueThreadLocals")->GetStaticField(0x0);
		}

		::System::Void _ctor(::System::Threading::ThreadPoolWorkQueue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadPoolWorkQueue*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS_CTOR_OFFSET))(this, a1);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS_CLEANUP_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS_FINALIZE_OFFSET))(this);
		}

	};
}

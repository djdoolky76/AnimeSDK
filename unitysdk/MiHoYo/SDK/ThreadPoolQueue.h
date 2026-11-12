#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class ThreadPoolTask; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Threading { class Thread; }

#define MIHOYO_SDK_THREADPOOLQUEUE_CHECKANDAUTOGROW_OFFSET UNITYSDK_OFFSET(0xB6B1B40)
#define MIHOYO_SDK_THREADPOOLQUEUE_COMMITTASK_OFFSET UNITYSDK_OFFSET(0xB6AEB10)
#define MIHOYO_SDK_THREADPOOLQUEUE_CTOR_OFFSET UNITYSDK_OFFSET(0xB6B1990)
#define MIHOYO_SDK_THREADPOOLQUEUE_DECREASEIDELRUNNER_OFFSET UNITYSDK_OFFSET(0xB6B1FF0)
#define MIHOYO_SDK_THREADPOOLQUEUE_ENTERIDELSTATUS_OFFSET UNITYSDK_OFFSET(0xB6B1E10)
#define MIHOYO_SDK_THREADPOOLQUEUE_INCREASEIDELRUNNER_OFFSET UNITYSDK_OFFSET(0xB6B1F40)
#define MIHOYO_SDK_THREADPOOLQUEUE_RUNCONCURRENTQUEUE_OFFSET UNITYSDK_OFFSET(0xB6B20A0)
#define MIHOYO_SDK_THREADPOOLQUEUE_RUNSERIALQUEUE_OFFSET UNITYSDK_OFFSET(0xB6B21D0)
#define MIHOYO_SDK_THREADPOOLQUEUE_SETCURTHREADNAME_OFFSET UNITYSDK_OFFSET(0xB6B20E0)
#define MIHOYO_SDK_THREADPOOLQUEUE_SETTHREADNAME_OFFSET UNITYSDK_OFFSET(0xB6B1F00)
#define MIHOYO_SDK_THREADPOOLQUEUE_SLEEP_OFFSET UNITYSDK_OFFSET(0xB6B1D80)
#define MIHOYO_SDK_THREADPOOLQUEUE_STARTUPONECONCURRENTRUNNER_OFFSET UNITYSDK_OFFSET(0xB6B20F0)
#define MIHOYO_SDK_THREADPOOLQUEUE_STARTUP_OFFSET UNITYSDK_OFFSET(0xB6B1AF0)
#define MIHOYO_SDK_THREADPOOLQUEUE_STOP_OFFSET UNITYSDK_OFFSET(0xB6AEFC0)
#define MIHOYO_SDK_THREADPOOLQUEUE_WAIT_OFFSET UNITYSDK_OFFSET(0xB6B1D30)
#define MIHOYO_SDK_THREADPOOLQUEUE_WAKEUP_OFFSET UNITYSDK_OFFSET(0xB6B1CB0)
#define MIHOYO_SDK_THREADPOOLQUEUE__RUNSERIALQUEUE_B__14_0_OFFSET UNITYSDK_OFFSET(0xB6B2760)
#define MIHOYO_SDK_THREADPOOLQUEUE__STARTUPONECONCURRENTRUNNER_B__12_0_OFFSET UNITYSDK_OFFSET(0xB6B22B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ThreadPoolQueue_TypeDefinitionIndex = 47517;

	class ThreadPoolQueue : public ::System::Object
	{
	public:
		::System::Object* m_lock; // 0x10
		::System::String* m_strQueueName; // 0x18
		::System::Collections::Generic::Queue_1<::MiHoYo::SDK::ThreadPoolTask*>* m_queueTask; // 0x20
		::System::Int32 m_nIdelCount; // 0x28
		::System::Int32 m_nRunnerCount; // 0x2C
		::System::Int32 m_nWakeupMillisec; // 0x30
		::System::Boolean m_bIsRun; // 0x34
		::System::Boolean m_bIsTimingWakeup; // 0x35
		::System::Boolean m_bIsAutoGrow; // 0x36
		// static const ::System::Object MIN_WAKEUP_TIME; // 0x0
		// static const ::System::Object MAX_QUEUE_LEN; // 0x0
		// static const ::System::Object MAX_SINGLE_SLEEP_MILLISEC; // 0x0
		// static const ::System::Object MAX_RUNNER_COUNT; // 0x0
		// static const ::System::String* THREAD_DEFAULT_NAME; // 0x0
		::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CommitTask(::MiHoYo::SDK::ThreadPoolTask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ThreadPoolTask*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_COMMITTASK_OFFSET))(this, a1);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_STOP_OFFSET))(this);
		}

		::System::Void Wakeup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_WAKEUP_OFFSET))(this);
		}

		::System::Void Wait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_WAIT_OFFSET))(this);
		}

		::System::Void Sleep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_SLEEP_OFFSET))(this);
		}

		::System::Void EnterIdelStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_ENTERIDELSTATUS_OFFSET))(this);
		}

		::System::Void SetThreadName(::System::Threading::Thread* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Thread*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_SETTHREADNAME_OFFSET))(this, a1);
		}

		::System::Void IncreaseIdelRunner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_INCREASEIDELRUNNER_OFFSET))(this);
		}

		::System::Void DecreaseIdelRunner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_DECREASEIDELRUNNER_OFFSET))(this);
		}

		::System::Void CheckAndAutoGrow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_CHECKANDAUTOGROW_OFFSET))(this);
		}

		::System::Void SetCurThreadName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_SETCURTHREADNAME_OFFSET))(this, a1);
		}

		::System::Void StartupOneConcurrentRunner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_STARTUPONECONCURRENTRUNNER_OFFSET))(this);
		}

		::System::Void RunConcurrentQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_RUNCONCURRENTQUEUE_OFFSET))(this);
		}

		::System::Void RunSerialQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_RUNSERIALQUEUE_OFFSET))(this);
		}

		::System::Void Startup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_STARTUP_OFFSET))(this);
		}

		::System::Void _StartupOneConcurrentRunner_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE__STARTUPONECONCURRENTRUNNER_B__12_0_OFFSET))(this);
		}

		::System::Void _RunSerialQueue_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE__RUNSERIALQUEUE_B__14_0_OFFSET))(this);
		}

	};
}

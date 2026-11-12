#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/TimeSpan.h"
namespace System { class Object; }
namespace System::Threading { class TimerCallback; }
namespace System::Threading { class Timer_Scheduler; }

#define SYSTEM_THREADING_TIMER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2EAB20)
#define SYSTEM_THREADING_TIMER_CHANGE_1_OFFSET UNITYSDK_OFFSET(0x1D2EA720)
#define SYSTEM_THREADING_TIMER_CHANGE_2_OFFSET UNITYSDK_OFFSET(0x1D2EA4E0)
#define SYSTEM_THREADING_TIMER_CHANGE_OFFSET UNITYSDK_OFFSET(0x1D2EA700)
#define SYSTEM_THREADING_TIMER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D2EA410)
#define SYSTEM_THREADING_TIMER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E0EE0)
#define SYSTEM_THREADING_TIMER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D2E2490)
#define SYSTEM_THREADING_TIMER_GETTIMEMONOTONIC_OFFSET UNITYSDK_OFFSET(0x1D2EA880)
#define SYSTEM_THREADING_TIMER_INIT_OFFSET UNITYSDK_OFFSET(0x1D2EA3B0)
#define SYSTEM_THREADING_TIMER_KEEPROOTEDWHILESCHEDULED_OFFSET UNITYSDK_OFFSET(0x1D2E0F40)

namespace System::Threading
{
	inline static constexpr unsigned int Timer_TypeDefinitionIndex = 879;

	class Timer : public ::System::MarshalByRefObject
	{
	public:
		::System::Object* state; // 0x18
		::System::Threading::TimerCallback* callback; // 0x20
		::System::Int64 period_ms; // 0x28
		::System::Int64 due_time_ms; // 0x30
		::System::Int64 next_run; // 0x38
		::System::Boolean disposed; // 0x40
		static ::System::Threading::Timer_Scheduler** StaticGet_scheduler()
		{
			return (::System::Threading::Timer_Scheduler**)UnitySDK::FromName("System.Threading", "Timer")->GetStaticField(0x27BD0);
		}

		::System::Void _ctor(::System::Threading::TimerCallback* a1, ::System::Object* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::TimerCallback*, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Threading::TimerCallback* a1, ::System::Object* a2, ::System::TimeSpan a3, ::System::TimeSpan a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::TimerCallback*, ::System::Object*, ::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_CCTOR_OFFSET))();
		}

		::System::Void Init(::System::Threading::TimerCallback* a1, ::System::Object* a2, ::System::Int64 a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::TimerCallback*, ::System::Object*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Change(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_CHANGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Change_1(::System::TimeSpan a1, ::System::TimeSpan a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_CHANGE_1_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Change_2(::System::Int64 a1, ::System::Int64 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_CHANGE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KeepRootedWhileScheduled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_KEEPROOTEDWHILESCHEDULED_OFFSET))(this);
		}

		static ::System::Int64 GetTimeMonotonic()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_GETTIMEMONOTONIC_OFFSET))();
		}

	};
}

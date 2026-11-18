#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/DelayType.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_CREATE_OFFSET UNITYSDK_OFFSET(0x1FF2DE40)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_CYSHARP_THREADING_TASKS_IPLAYERLOOPITEM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FF2E080)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FF2E070)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_RESTART_OFFSET UNITYSDK_OFFSET(0x1FF2DFC0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_STARTNEW_OFFSET UNITYSDK_OFFSET(0x1FF2DF80)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF2DE20)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int PlayerLoopTimer_TypeDefinitionIndex = 31287;

	class PlayerLoopTimer : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::System::Action_1<::System::Object*>* timerCallback; // 0x18
		::System::Object* state; // 0x20
		::System::Boolean isDisposed; // 0x28
		::System::Boolean isRunning; // 0x29
		::System::Boolean tryStop; // 0x2A
		::System::Boolean periodic; // 0x2B
		::Cysharp::Threading::Tasks::PlayerLoopTiming playerLoopTiming; // 0x2C

		::System::Void _ctor(::System::Boolean periodic, ::Cysharp::Threading::Tasks::PlayerLoopTiming playerLoopTiming, ::System::Threading::CancellationToken cancellationToken, ::System::Action_1<::System::Object*>* timerCallback, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER__CTOR_OFFSET))(this, periodic, playerLoopTiming, cancellationToken, timerCallback, state);
		}

		static ::Cysharp::Threading::Tasks::PlayerLoopTimer* Create(::System::TimeSpan interval, ::System::Boolean periodic, ::Cysharp::Threading::Tasks::DelayType delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming playerLoopTiming, ::System::Threading::CancellationToken cancellationToken, ::System::Action_1<::System::Object*>* timerCallback, ::System::Object* state)
		{
			return ((::Cysharp::Threading::Tasks::PlayerLoopTimer*(*)(::System::TimeSpan, ::System::Boolean, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_CREATE_OFFSET))(interval, periodic, delayType, playerLoopTiming, cancellationToken, timerCallback, state);
		}

		static ::Cysharp::Threading::Tasks::PlayerLoopTimer* StartNew(::System::TimeSpan interval, ::System::Boolean periodic, ::Cysharp::Threading::Tasks::DelayType delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming playerLoopTiming, ::System::Threading::CancellationToken cancellationToken, ::System::Action_1<::System::Object*>* timerCallback, ::System::Object* state)
		{
			return ((::Cysharp::Threading::Tasks::PlayerLoopTimer*(*)(::System::TimeSpan, ::System::Boolean, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_STARTNEW_OFFSET))(interval, periodic, delayType, playerLoopTiming, cancellationToken, timerCallback, state);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_RESTART_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Cysharp_Threading_Tasks_IPlayerLoopItem_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_CYSHARP_THREADING_TASKS_IPLAYERLOOPITEM_MOVENEXT_OFFSET))(this);
		}
	};
}

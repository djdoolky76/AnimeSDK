#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Internal/ValueStopwatch.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTimer.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_REALTIMEPLAYERLOOPTIMER_MOVENEXTCORE_OFFSET UNITYSDK_OFFSET(0x2002EE80)
#define CYSHARP_THREADING_TASKS_REALTIMEPLAYERLOOPTIMER_RESETCORE_OFFSET UNITYSDK_OFFSET(0x2002ED10)
#define CYSHARP_THREADING_TASKS_REALTIMEPLAYERLOOPTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x2002EBE0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int RealtimePlayerLoopTimer_TypeDefinitionIndex = 31290;

	class RealtimePlayerLoopTimer : public ::Cysharp::Threading::Tasks::PlayerLoopTimer
	{
	public:
		::System::Int64 intervalTicks; // 0x30
		::Cysharp::Threading::Tasks::Internal::ValueStopwatch stopwatch; // 0x38

		::System::Void _ctor(::System::TimeSpan interval, ::System::Boolean periodic, ::Cysharp::Threading::Tasks::PlayerLoopTiming playerLoopTiming, ::System::Threading::CancellationToken cancellationToken, ::System::Action_1<::System::Object*>* timerCallback, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_REALTIMEPLAYERLOOPTIMER__CTOR_OFFSET))(this, interval, periodic, playerLoopTiming, cancellationToken, timerCallback, state);
		}

		::System::Boolean MoveNextCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_REALTIMEPLAYERLOOPTIMER_MOVENEXTCORE_OFFSET))(this);
		}

		::System::Void ResetCore(::System::Nullable_1<::System::TimeSpan> interval)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::TimeSpan>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_REALTIMEPLAYERLOOPTIMER_RESETCORE_OFFSET))(this, interval);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTimer.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"
namespace System { class Action; }
namespace System { class Nullable; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_IGNORETIMESCALEPLAYERLOOPTIMER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F119540)
#define CYSHARP_THREADING_TASKS_IGNORETIMESCALEPLAYERLOOPTIMER_MOVENEXTCORE_OFFSET UNITYSDK_OFFSET(0x1F119710)
#define CYSHARP_THREADING_TASKS_IGNORETIMESCALEPLAYERLOOPTIMER_RESETCORE_OFFSET UNITYSDK_OFFSET(0x1F119590)

namespace Cysharp::Threading::Tasks
{
	class IgnoreTimeScalePlayerLoopTimer : public ::Cysharp::Threading::Tasks::PlayerLoopTimer
	{
	public:
		::System::Single elapsed; // 0x30
		::System::Single interval; // 0x34
		::System::Int32 initialFrame; // 0x38
		::System::Void _ctor(::System::TimeSpan a1, ::System::Boolean a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Threading::CancellationToken a4, ::System::Action* a5, ::System::Object* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Action*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_IGNORETIMESCALEPLAYERLOOPTIMER_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean MoveNextCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_IGNORETIMESCALEPLAYERLOOPTIMER_MOVENEXTCORE_OFFSET))(this);
		}

		::System::Void ResetCore(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_IGNORETIMESCALEPLAYERLOOPTIMER_RESETCORE_OFFSET))(this, a1);
		}

	};
}

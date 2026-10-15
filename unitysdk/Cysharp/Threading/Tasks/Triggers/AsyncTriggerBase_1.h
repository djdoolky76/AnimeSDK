#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/TriggerEvent_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cysharp::Threading::Tasks::Triggers
{
	template <typename T>
	class AsyncTriggerBase_1 : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cysharp::Threading::Tasks::TriggerEvent_1<T> triggerEvent; // 0x0
		::System::Boolean calledAwake; // 0x0
		::System::Boolean calledDestroy; // 0x0
	};
}

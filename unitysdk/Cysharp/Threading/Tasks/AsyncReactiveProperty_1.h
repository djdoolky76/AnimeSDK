#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/TriggerEvent_1.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AsyncReactiveProperty_1_TypeDefinitionIndex = 38120;

	template <typename T>
	class AsyncReactiveProperty_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::TriggerEvent_1<T> triggerEvent; // 0x0
		T latestValue; // 0x0
		static ::System::Boolean* StaticGet_isValueType()
		{
			return (::System::Boolean*)UnitySDK::FromName("Cysharp.Threading.Tasks", "AsyncReactiveProperty`1")->GetStaticField(0x0);
		}

	};
}

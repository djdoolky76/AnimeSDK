#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_CanceledUniTaskCache_1_TypeDefinitionIndex = 38242;

	template <typename T>
	class UniTask_CanceledUniTaskCache_1 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask* StaticGet_Task()
		{
			return (::Cysharp::Threading::Tasks::UniTask*)UnitySDK::FromName("Cysharp.Threading.Tasks", "CanceledUniTaskCache`1")->GetStaticField(0x0);
		}

	};
}

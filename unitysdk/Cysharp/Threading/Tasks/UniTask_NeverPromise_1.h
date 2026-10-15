#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_NeverPromise_1_TypeDefinitionIndex = 38251;

	template <typename T>
	class UniTask_NeverPromise_1 : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> core; // 0x0
		static ::System::Action** StaticGet_cancellationCallback()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "NeverPromise`1")->GetStaticField(0x0);
		}

	};
}

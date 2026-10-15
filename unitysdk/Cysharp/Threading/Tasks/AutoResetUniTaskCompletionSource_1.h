#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { template <typename T> class AutoResetUniTaskCompletionSource_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AutoResetUniTaskCompletionSource_1_TypeDefinitionIndex = 38397;

	template <typename T>
	class AutoResetUniTaskCompletionSource_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>* nextNode; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> core; // 0x0
		::System::Int16 version; // 0x0
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>*)UnitySDK::FromName("Cysharp.Threading.Tasks", "AutoResetUniTaskCompletionSource`1")->GetStaticField(0x0);
		}

	};
}

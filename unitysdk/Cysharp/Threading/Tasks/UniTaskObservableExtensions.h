#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
namespace Cysharp::Threading::Tasks::Internal { template <typename T> class AsyncSubject_1; }
namespace System { template <typename T> class IObservable_1; }

#define CYSHARP_THREADING_TASKS_UNITASKOBSERVABLEEXTENSIONS_FIRE_1_OFFSET UNITYSDK_OFFSET(0x1F127E70)
#define CYSHARP_THREADING_TASKS_UNITASKOBSERVABLEEXTENSIONS_TOOBSERVABLE_1_OFFSET UNITYSDK_OFFSET(0x1F127CE0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskObservableExtensions_TypeDefinitionIndex = 38438;

	class UniTaskObservableExtensions : public ::System::Object
	{
	public:
		static ::System::IObservable_1<::Cysharp::Threading::Tasks::AsyncUnit>* ToObservable_1(::Cysharp::Threading::Tasks::UniTask a1)
		{
			return ((::System::IObservable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKOBSERVABLEEXTENSIONS_TOOBSERVABLE_1_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTaskVoid Fire_1(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<::Cysharp::Threading::Tasks::AsyncUnit>* a1, ::Cysharp::Threading::Tasks::UniTask a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<::Cysharp::Threading::Tasks::AsyncUnit>*, ::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKOBSERVABLEEXTENSIONS_FIRE_1_OFFSET))(a1, a2);
		}

	};
}

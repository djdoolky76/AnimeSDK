#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Action; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int TakeUntilCanceled_1__TakeUntilCanceled_TypeDefinitionIndex = 45658;

	template <typename T>
	class TakeUntilCanceled_1__TakeUntilCanceled : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken1; // 0x0
		::System::Threading::CancellationToken cancellationToken2; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration1; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration2; // 0x0
		::System::Boolean isCanceled; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* enumerator; // 0x0
		::System::Object* awaiter; // 0x0
		T _Current_k__BackingField; // 0x0
		static ::System::Action** StaticGet_CancelDelegate1()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_TakeUntilCanceled")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_CancelDelegate2()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_TakeUntilCanceled")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_MoveNextCoreDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_TakeUntilCanceled")->GetStaticField(0x0);
		}

	};
}

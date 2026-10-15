#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace Cysharp::Threading::Tasks::Internal { class SingleAssignmentDisposable; }
namespace System { class Action; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	class UniTaskObservableExtensions_ToUniTaskObserver_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* promise; // 0x0
		::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable* disposable; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration registration; // 0x0
		::System::Boolean hasValue; // 0x0
		T latestValue; // 0x0
		static ::System::Action** StaticGet_callback()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "ToUniTaskObserver`1")->GetStaticField(0x0);
		}

	};
}

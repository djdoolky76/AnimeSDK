#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks::Internal { template <typename T> class ImmutableList_1; }
namespace System { template <typename T> class IObserver_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	template <typename T>
	class ListObserver_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::Internal::ImmutableList_1<::System::IObserver_1<T>*>* _observers; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks::Internal { template <typename T> class EmptyObserver_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	template <typename T>
	class EmptyObserver_1 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Internal::EmptyObserver_1<T>** StaticGet_Instance()
		{
			return (::Cysharp::Threading::Tasks::Internal::EmptyObserver_1<T>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "EmptyObserver`1")->GetStaticField(0x0);
		}

	};
}

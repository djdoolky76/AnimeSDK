#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks::Internal { template <typename T> class DisposedObserver_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int DisposedObserver_1_TypeDefinitionIndex = 38700;

	template <typename T>
	class DisposedObserver_1 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>** StaticGet_Instance()
		{
			return (::Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "DisposedObserver`1")->GetStaticField(0x0);
		}

	};
}

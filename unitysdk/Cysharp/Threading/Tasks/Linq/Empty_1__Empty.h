#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Empty_1__Empty_TypeDefinitionIndex = 45357;

	template <typename T>
	class Empty_1__Empty : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>** StaticGet_Instance()
		{
			return (::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_Empty")->GetStaticField(0x0);
		}

	};
}

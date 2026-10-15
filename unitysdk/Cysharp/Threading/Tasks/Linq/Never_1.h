#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Never_1_TypeDefinitionIndex = 45514;

	template <typename T>
	class Never_1 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>** StaticGet_Instance()
		{
			return (::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "Never`1")->GetStaticField(0x0);
		}

	};
}

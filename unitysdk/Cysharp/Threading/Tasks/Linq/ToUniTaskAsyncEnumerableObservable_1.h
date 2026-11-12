#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T> class IObservable_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToUniTaskAsyncEnumerableObservable_1_TypeDefinitionIndex = 46739;

	template <typename T>
	class ToUniTaskAsyncEnumerableObservable_1 : public ::System::Object
	{
	public:
		::System::IObservable_1<T>* source; // 0x0
	};
}

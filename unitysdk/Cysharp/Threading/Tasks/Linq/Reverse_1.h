#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Reverse_1_TypeDefinitionIndex = 45548;

	template <typename T>
	class Reverse_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* source; // 0x0
	};
}

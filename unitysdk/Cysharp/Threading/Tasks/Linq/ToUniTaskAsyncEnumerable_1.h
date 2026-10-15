#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToUniTaskAsyncEnumerable_1_TypeDefinitionIndex = 45702;

	template <typename T>
	class ToUniTaskAsyncEnumerable_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<T>* source; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace System::Linq
{
	inline static constexpr unsigned int OrderedEnumerable_1_TypeDefinitionIndex = 3177;

	template <typename T>
	class OrderedEnumerable_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<T>* source; // 0x0
	};
}

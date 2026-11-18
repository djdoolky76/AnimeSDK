#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int FreezedList_1_TypeDefinitionIndex = 28121;

	template <typename T>
	class FreezedList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<T>* list; // 0x0
	};
}

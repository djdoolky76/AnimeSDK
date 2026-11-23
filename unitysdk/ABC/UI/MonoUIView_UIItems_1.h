#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace ABC::UI
{
	inline static constexpr unsigned int MonoUIView_UIItems_1_TypeDefinitionIndex = 8921;

	template <typename T>
	struct alignas(8) MonoUIView_UIItems_1
	{
		::System::Collections::Generic::List_1<::System::Object*>* _items; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, T>* _itemDict; // 0x0
	};
}

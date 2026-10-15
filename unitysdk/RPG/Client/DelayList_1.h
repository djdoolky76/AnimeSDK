#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int DelayList_1_TypeDefinitionIndex = 59616;

	template <typename T>
	class DelayList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* Items; // 0x0
		::System::Object* _FuncEnumItems; // 0x0
	};
}

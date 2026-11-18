#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class AggregateObject_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int AggregateObject_1_ComponentDependencyBuilder_TypeDefinitionIndex = 8857;

	template <typename T>
	class AggregateObject_1_ComponentDependencyBuilder : public ::System::Object
	{
	public:
		::System::Boolean _builtFromCache; // 0x0
		::Il2CppArray<::System::Object*>* _dependency; // 0x0
		::Foundation::AggregateObject_1<T>* _object; // 0x0
		::System::Collections::Generic::List_1<::System::Object*>* _componentData; // 0x0
		::System::Int32 _componentIndex; // 0x0
	};
}

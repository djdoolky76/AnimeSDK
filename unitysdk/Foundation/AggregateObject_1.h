#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class IAggregateComponent_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int AggregateObject_1_TypeDefinitionIndex = 8856;

	template <typename T>
	class AggregateObject_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int64>** StaticGet_SortedEvents()
		{
			return (::Il2CppArray<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(AggregateObject_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Boolean _builtFromCache; // 0x0
		::System::Object* _status; // 0x0
		::System::Collections::Generic::List_1<::System::Int64>* _componentTypeHash; // 0x0
		::System::Collections::Generic::List_1<::System::Int64>* _interfaceTypeHash; // 0x0
		::System::Collections::Generic::List_1<::System::Object*>* _interfaceData; // 0x0
		::System::Collections::Generic::List_1<::System::Object*>* _componentData; // 0x0
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* _eventDispatcher; // 0x0
		::System::Collections::Generic::List_1<::Foundation::IAggregateComponent_1<T>*>* _components; // 0x0
	};
}

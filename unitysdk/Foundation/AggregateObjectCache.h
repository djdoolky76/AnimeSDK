#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_AGGREGATEOBJECTCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x2003B610)

namespace Foundation
{
	inline static constexpr unsigned int AggregateObjectCache_TypeDefinitionIndex = 8733;

	class AggregateObjectCache : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* Components; // 0x10
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* EventDispatcher; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* Interfaces; // 0x20
		::System::Int64 EventTypeHash; // 0x28

		::System::Void _ctor(::System::Int64 eventTypeHash, ::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* eventDispatcher, ::System::Collections::Generic::List_1<::System::Object*>* interfaces, ::System::Collections::Generic::List_1<::System::Object*>* components)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_AGGREGATEOBJECTCACHE__CTOR_OFFSET))(this, eventTypeHash, eventDispatcher, interfaces, components);
		}
	};
}

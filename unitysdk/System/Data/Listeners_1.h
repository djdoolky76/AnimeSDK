#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace System::Data
{
	inline static constexpr unsigned int Listeners_1_TypeDefinitionIndex = 37343;

	template <typename T>
	class Listeners_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* _listeners; // 0x0
		::System::Object* _filter; // 0x0
		::System::Int32 _objectID; // 0x0
		::System::Int32 _listenerReaderCount; // 0x0
	};
}

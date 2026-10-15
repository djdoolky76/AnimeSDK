#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class IACGHDENOPA;

inline static constexpr unsigned int IACGHDENOPA_Enumerator_TypeDefinitionIndex = 6328;

	struct alignas(8) IACGHDENOPA_Enumerator
	{
		::IACGHDENOPA* dictionary; // 0x0
		::System::Int32 version; // 0x0
		::System::Int32 index; // 0x0
		::System::Collections::Generic::KeyValuePair_2<::System::Object*, ::System::Object*> current; // 0x0
		::System::Int32 getEnumeratorRetType; // 0x0
		// static const ::System::Object DictEntry; // 0x0
		// static const ::System::Object KeyValuePair; // 0x0
	};

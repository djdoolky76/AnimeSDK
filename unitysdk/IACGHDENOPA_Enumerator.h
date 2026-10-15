#pragma once
#include "unitysdk/unitysdk.h"
class IACGHDENOPA;
namespace System::Collections::Generic { class KeyValuePair; }

	struct alignas(8) IACGHDENOPA_Enumerator
	{
		::IACGHDENOPA* dictionary; // 0x0
		::System::Int32 version; // 0x0
		::System::Int32 index; // 0x0
		::System::Collections::Generic::KeyValuePair* current; // 0x0
		::System::Int32 getEnumeratorRetType; // 0x0
		// static const ::System::Object DictEntry; // 0x0
		// static const ::System::Object KeyValuePair; // 0x0
	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace System::Collections::Generic
{
	template <typename T1, typename T2>
	struct alignas(8) Dictionary_2_Enumerator
	{
		::System::Collections::Generic::Dictionary_2<T1, T2>* dictionary; // 0x0
		::System::Int32 version; // 0x0
		::System::Int32 index; // 0x0
		::System::Collections::Generic::KeyValuePair* current; // 0x0
		::System::Int32 getEnumeratorRetType; // 0x0
	};
}

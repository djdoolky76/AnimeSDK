#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { class KeyValuePair; }

namespace System::Collections::Concurrent
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32>
	class ConcurrentDictionary_2__GetEnumerator_d__32 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Collections::Generic::KeyValuePair* __2__current; // 0x0
		::System::Collections::Concurrent::ConcurrentDictionary_2<T1, T2>* __4__this; // 0x0
		::Il2CppArray<::System::Object*>* _buckets_5__1; // 0x0
		::System::Object* _current_5__2; // 0x0
		::System::Int32 _i_5__3; // 0x0
	};
}

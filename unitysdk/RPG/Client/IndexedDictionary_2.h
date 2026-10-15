#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::Client
{
	template <typename T1, typename T2>
	class IndexedDictionary_2 : public ::System::Object
	{
	public:
		::System::Int32 _Count_k__BackingField; // 0x0
		::Collections::Pooled::PooledList_1<T1>* _data; // 0x0
		::System::Collections::Generic::Dictionary_2<T2, ::System::Int32>* _indexMap; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, T2>* _reverseMap; // 0x0
	};
}

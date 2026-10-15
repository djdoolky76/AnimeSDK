#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_SerializableDictionary_2_TypeDefinitionIndex = 40660;

	template <typename T1, typename T2>
	class HEU_SerializableDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T1, T2>* _dictionary; // 0x0
		::Il2CppArray<T1>* _keys; // 0x0
		::Il2CppArray<T2>* _values; // 0x0
	};
}

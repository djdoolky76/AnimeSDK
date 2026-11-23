#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::Pref
{
	inline static constexpr unsigned int PerfSerializedArray_1_TypeDefinitionIndex = 4334;

	template <typename T>
	class PerfSerializedArray_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* Data; // 0x0
	};
}

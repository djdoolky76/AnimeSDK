#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int QuickList_1_TypeDefinitionIndex = 35969;

	template <typename T>
	class QuickList_1 : public ::System::Object
	{
	public:
		::System::Int32 _count; // 0x0
		::Il2CppArray<T>* _storage; // 0x0
		::System::Boolean _IsIterating_k__BackingField; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsComponentList_1_TypeDefinitionIndex = 36036;

	template <typename T>
	class EcsComponentList_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _buffer; // 0x0
		::System::Int32 _size; // 0x0
	};
}

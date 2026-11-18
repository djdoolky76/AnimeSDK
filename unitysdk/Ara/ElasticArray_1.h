#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Ara
{
	inline static constexpr unsigned int ElasticArray_1_TypeDefinitionIndex = 33110;

	template <typename T>
	class ElasticArray_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* data; // 0x0
		::System::Int32 count; // 0x0
	};
}

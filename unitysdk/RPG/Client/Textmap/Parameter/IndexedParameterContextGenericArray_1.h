#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIHIPJCGCDB.h"

namespace RPG::Client::Textmap::Parameter
{
	inline static constexpr unsigned int IndexedParameterContextGenericArray_1_TypeDefinitionIndex = 73375;

	template <typename T>
	class IndexedParameterContextGenericArray_1 : public ::PIHIPJCGCDB
	{
	public:
		::Il2CppArray<T>* _Parameters; // 0x0
	};
}

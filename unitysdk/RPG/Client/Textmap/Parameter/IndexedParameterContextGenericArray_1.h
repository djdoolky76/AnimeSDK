#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIHIPJCGCDB.h"

namespace RPG::Client::Textmap::Parameter
{
	template <typename T>
	class IndexedParameterContextGenericArray_1 : public ::PIHIPJCGCDB
	{
	public:
		::Il2CppArray<T>* _Parameters; // 0x0
	};
}

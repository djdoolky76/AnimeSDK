#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::DataStructures::Lists
{
	inline static constexpr unsigned int EasySerializeDictionaryEntry_2_TypeDefinitionIndex = 28054;

	template <typename T1, typename T2>
	class EasySerializeDictionaryEntry_2 : public ::System::Object
	{
	public:
		T1 key; // 0x0
		T2 value; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int CacheDict_2_Entry_TypeDefinitionIndex = 3684;

	template <typename T1, typename T2>
	class CacheDict_2_Entry : public ::System::Object
	{
	public:
		::System::Int32 _hash; // 0x0
		T1 _key; // 0x0
		T2 _value; // 0x0
	};
}

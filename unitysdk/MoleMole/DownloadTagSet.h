#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCCJJOFALCD.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int DownloadTagSet_TypeDefinitionIndex = 43716;

	struct alignas(8) DownloadTagSet
	{
		::Il2CppArray<::FCCJJOFALCD>* tags; // 0x10
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Exception; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int WhenEachResult_1_TypeDefinitionIndex = 38375;

	template <typename T>
	struct alignas(8) WhenEachResult_1
	{
		T _Result_k__BackingField; // 0x0
		::System::Exception* _Exception_k__BackingField; // 0x0
	};
}

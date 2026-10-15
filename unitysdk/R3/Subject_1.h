#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/CompleteState.h"
namespace System { class Object; }

namespace R3
{
	inline static constexpr unsigned int Subject_1_TypeDefinitionIndex = 35972;

	template <typename T>
	class Subject_1
	{
	public:
		::R3::CompleteState completeState; // 0x0
		::System::Object* root; // 0x0
		::System::UInt64 version; // 0x0
	};
}

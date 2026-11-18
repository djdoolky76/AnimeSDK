#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOp.h"

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int LoadOp_1_TypeDefinitionIndex = 8013;

	template <typename T>
	class LoadOp_1 : public ::ConfigModuleLib::Runtime::LoadOp
	{
	public:
		T _value; // 0x0
	};
}

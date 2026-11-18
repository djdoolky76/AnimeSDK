#pragma once
#include "unitysdk/unitysdk.h"

namespace System { template <typename T> class Func_1; }

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int JustValueOp_1_TypeDefinitionIndex = 8134;

	template <typename T>
	class JustValueOp_1
	{
	public:
		::System::Func_1<T>* _factory; // 0x0
		T _directValue; // 0x0
		::System::Boolean _hasDirectValue; // 0x0
	};
}

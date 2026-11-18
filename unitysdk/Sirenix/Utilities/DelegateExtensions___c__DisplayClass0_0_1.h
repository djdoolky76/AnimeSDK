#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int DelegateExtensions___c__DisplayClass0_0_1_TypeDefinitionIndex = 6448;

	template <typename T>
	class DelegateExtensions___c__DisplayClass0_0_1 : public ::System::Object
	{
	public:
		::System::Boolean hasValue; // 0x0
		T value; // 0x0
		::System::Func_1<T>* getValue; // 0x0
	};
}

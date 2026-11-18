#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T> class Action_1; }

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int Threader___c__DisplayClass14_0_4_TypeDefinitionIndex = 29288;

	template <typename T1, typename T2, typename T3, typename T4>
	class Threader___c__DisplayClass14_0_4 : public ::System::Object
	{
	public:
		T1 result; // 0x0
		::System::Func_4<T2, T3, T4, T4>* function; // 0x0
		T4 parameter1; // 0x0
		T4 parameter2; // 0x0
		T4 parameter3; // 0x0
		::System::Action_1<T4>* callback; // 0x0
	};
}

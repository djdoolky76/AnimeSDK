#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int Threader___c__DisplayClass13_0_3_TypeDefinitionIndex = 29289;

	template <typename T1, typename T2, typename T3>
	class Threader___c__DisplayClass13_0_3 : public ::System::Object
	{
	public:
		T1 result; // 0x0
		::System::Func_3<T2, T3, T3>* function; // 0x0
		T3 parameter1; // 0x0
		T3 parameter2; // 0x0
		::System::Action_1<T3>* callback; // 0x0
	};
}

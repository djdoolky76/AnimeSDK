#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int Threader___c__DisplayClass12_0_2_TypeDefinitionIndex = 29292;

	template <typename T1, typename T2>
	class Threader___c__DisplayClass12_0_2 : public ::System::Object
	{
	public:
		T1 result; // 0x0
		::System::Func_2<T2, T2>* function; // 0x0
		T2 parameter1; // 0x0
		::System::Action_1<T2>* callback; // 0x0
	};
}

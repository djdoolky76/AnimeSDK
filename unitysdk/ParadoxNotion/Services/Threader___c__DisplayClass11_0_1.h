#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int Threader___c__DisplayClass11_0_1_TypeDefinitionIndex = 29291;

	template <typename T>
	class Threader___c__DisplayClass11_0_1 : public ::System::Object
	{
	public:
		T result; // 0x0
		::System::Func_1<T>* function; // 0x0
		::System::Action_1<T>* callback; // 0x0
	};
}

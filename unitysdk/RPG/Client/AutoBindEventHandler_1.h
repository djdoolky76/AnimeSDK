#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGCNFOOAFPO.h"
namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int AutoBindEventHandler_1_TypeDefinitionIndex = 73148;

	template <typename T>
	class AutoBindEventHandler_1 : public ::DGCNFOOAFPO
	{
	public:
		::System::Action_1<T>* Delegate; // 0x0
	};
}

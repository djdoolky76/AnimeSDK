#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMBPBAHKLDB.h"
namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int AutoBindNotifyHandler_1_TypeDefinitionIndex = 73147;

	template <typename T>
	class AutoBindNotifyHandler_1 : public ::GMBPBAHKLDB
	{
	public:
		::System::Action_1<T>* Delegate; // 0x0
	};
}

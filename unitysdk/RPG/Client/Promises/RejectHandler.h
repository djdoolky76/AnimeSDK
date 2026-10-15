#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::Promises { class IRejectable; }
namespace System { class Action; }
namespace System { class Exception; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int RejectHandler_TypeDefinitionIndex = 9911;

	struct alignas(8) RejectHandler
	{
		::System::Action* callback; // 0x10
		::RPG::Client::Promises::IRejectable* rejectable; // 0x18
	};
}

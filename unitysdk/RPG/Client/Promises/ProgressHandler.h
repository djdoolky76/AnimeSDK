#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::Promises { class IRejectable; }
namespace System { class Action; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int ProgressHandler_TypeDefinitionIndex = 9912;

	struct alignas(8) ProgressHandler
	{
		::System::Action* callback; // 0x10
		::RPG::Client::Promises::IRejectable* rejectable; // 0x18
	};
}

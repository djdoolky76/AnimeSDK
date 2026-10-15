#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::Promises { class IRejectable; }
namespace System { class Action; }

namespace RPG::Client::Promises
{
	struct alignas(8) Promise_ResolveHandler
	{
		::System::Action* callback; // 0x10
		::RPG::Client::Promises::IRejectable* rejectable; // 0x18
	};
}

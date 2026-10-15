#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Action; }
namespace ZenFulcrum::EmbeddedBrowser { class IRejectable; }

namespace ZenFulcrum::EmbeddedBrowser
{
	struct alignas(8) Promise_ResolveHandler
	{
		::System::Action* callback; // 0x10
		::ZenFulcrum::EmbeddedBrowser::IRejectable* rejectable; // 0x18
	};
}

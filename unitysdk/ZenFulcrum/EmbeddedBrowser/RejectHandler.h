#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Action; }
namespace System { class Exception; }
namespace ZenFulcrum::EmbeddedBrowser { class IRejectable; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int RejectHandler_TypeDefinitionIndex = 39544;

	struct alignas(8) RejectHandler
	{
		::System::Action* callback; // 0x10
		::ZenFulcrum::EmbeddedBrowser::IRejectable* rejectable; // 0x18
	};
}

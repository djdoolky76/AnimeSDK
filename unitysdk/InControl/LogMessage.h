#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/LogMessageType.h"
namespace System { class String; }

namespace InControl
{
	struct alignas(8) LogMessage
	{
		::System::String* text; // 0x10
		::InControl::LogMessageType type; // 0x18
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/QA/RemoteDebug/RemoteDebugFrameType.h"

namespace RPG::QA::RemoteDebug
{
	struct alignas(8) RemoteDebugFrame
	{
		::RPG::QA::RemoteDebug::RemoteDebugFrameType Type; // 0x10
		::System::UInt16 ToolId; // 0x12
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Byte>* Payload; // 0x18
	};
}

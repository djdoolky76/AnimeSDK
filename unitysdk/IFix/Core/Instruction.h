#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Code.h"

namespace IFix::Core
{
	struct alignas(4) Instruction
	{
		::IFix::Core::Code Code; // 0x10
		::System::Int32 Operand; // 0x14
	};
}

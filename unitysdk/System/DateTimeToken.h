#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeParse_DTT.h"
#include "unitysdk/System/TokenType.h"

namespace System
{
	struct alignas(4) DateTimeToken
	{
		::System::DateTimeParse_DTT dtt; // 0x10
		::System::TokenType suffix; // 0x14
		::System::Int32 num; // 0x18
	};
}

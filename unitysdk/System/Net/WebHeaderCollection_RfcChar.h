#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	enum class WebHeaderCollection_RfcChar : ::System::Byte
	{
		High = 0,
		Reg = 1,
		Ctl = 2,
		CR = 3,
		LF = 4,
		WS = 5,
		Colon = 6,
		Delim = 7,
	};
}

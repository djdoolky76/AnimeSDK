#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	enum class StringEscapeHandling : ::System::Int32
	{
		Default = 0,
		EscapeNonAscii = 1,
		EscapeHtml = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Linq
{
	enum class LoadOptions : ::System::Int32
	{
		None = 0,
		PreserveWhitespace = 1,
		SetBaseUri = 2,
		SetLineInfo = 4,
	};
}

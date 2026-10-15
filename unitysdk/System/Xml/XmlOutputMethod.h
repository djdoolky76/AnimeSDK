#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	enum class XmlOutputMethod : ::System::Int32
	{
		Xml = 0,
		Html = 1,
		Text = 2,
		AutoDetect = 3,
	};
}

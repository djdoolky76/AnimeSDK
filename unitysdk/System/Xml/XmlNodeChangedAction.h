#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	enum class XmlNodeChangedAction : ::System::Int32
	{
		Insert = 0,
		Remove = 1,
		Change = 2,
	};
}

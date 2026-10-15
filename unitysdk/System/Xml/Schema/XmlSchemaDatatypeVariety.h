#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	enum class XmlSchemaDatatypeVariety : ::System::Int32
	{
		Atomic = 0,
		List = 1,
		Union = 2,
	};
}

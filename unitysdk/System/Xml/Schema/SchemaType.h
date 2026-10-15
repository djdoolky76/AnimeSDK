#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	enum class SchemaType : ::System::Int32
	{
		None = 0,
		DTD = 1,
		XDR = 2,
		XSD = 3,
	};
}

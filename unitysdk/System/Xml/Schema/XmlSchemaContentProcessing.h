#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	enum class XmlSchemaContentProcessing : ::System::Int32
	{
		None = 0,
		Skip = 1,
		Lax = 2,
		Strict = 3,
	};
}

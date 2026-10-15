#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	enum class XmlSchemaValidity : ::System::Int32
	{
		NotKnown = 0,
		Valid = 1,
		Invalid = 2,
	};
}

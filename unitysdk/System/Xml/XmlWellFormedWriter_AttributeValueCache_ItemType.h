#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	enum class XmlWellFormedWriter_AttributeValueCache_ItemType : ::System::Int32
	{
		EntityRef = 0,
		CharEntity = 1,
		SurrogateCharEntity = 2,
		Whitespace = 3,
		String = 4,
		StringChars = 5,
		Raw = 6,
		RawChars = 7,
		ValueString = 8,
	};
}

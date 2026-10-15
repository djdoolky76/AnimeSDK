#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	enum class XsdDateTime_XsdDateTimeKind : ::System::Int32
	{
		Unspecified = 0,
		Zulu = 1,
		LocalWestOfZulu = 2,
		LocalEastOfZulu = 3,
	};
}

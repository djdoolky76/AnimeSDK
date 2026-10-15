#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"

namespace System::Xml::Schema
{
	struct alignas(4) XmlAtomicValue_Union
	{
		::System::Boolean boolVal; // 0x10
		::System::Double dblVal; // 0x10
		::System::Int64 i64Val; // 0x10
		::System::Int32 i32Val; // 0x10
		::System::DateTime dtVal; // 0x10
	};
}

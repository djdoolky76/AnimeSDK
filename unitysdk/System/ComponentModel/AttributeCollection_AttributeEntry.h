#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Type; }

namespace System::ComponentModel
{
	struct alignas(8) AttributeCollection_AttributeEntry
	{
		::System::Type* type; // 0x10
		::System::Int32 index; // 0x18
	};
}

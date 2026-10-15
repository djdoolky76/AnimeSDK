#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace System::Globalization
{
	struct alignas(8) InternalEncodingDataItem
	{
		::System::String* webName; // 0x10
		::System::UInt16 codePage; // 0x18
	};
}

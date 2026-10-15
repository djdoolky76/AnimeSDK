#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Linq
{
	template <typename T>
	struct alignas(8) XHashtable_1_XHashtableState_Entry
	{
		T Value; // 0x0
		::System::Int32 HashCode; // 0x0
		::System::Int32 Next; // 0x0
	};
}

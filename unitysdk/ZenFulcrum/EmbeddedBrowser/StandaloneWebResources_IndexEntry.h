#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace ZenFulcrum::EmbeddedBrowser
{
	struct alignas(8) StandaloneWebResources_IndexEntry
	{
		::System::String* name; // 0x10
		::System::Int64 offset; // 0x18
		::System::Int32 length; // 0x20
	};
}

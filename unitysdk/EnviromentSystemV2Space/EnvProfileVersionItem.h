#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace EnviromentSystemV2Space
{
	struct alignas(8) EnvProfileVersionItem
	{
		::System::String* name; // 0x10
	};
}

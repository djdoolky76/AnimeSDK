#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_GLOBALIZATION_UNICODE_LEVEL2MAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0581E0)

namespace Mono::Globalization::Unicode
{
	class Level2Map : public ::System::Object
	{
	public:
		::System::Byte Source; // 0x10
		::System::Byte Replace; // 0x11
		::System::Void _ctor(::System::Byte a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_LEVEL2MAP_CTOR_OFFSET))(this, a1, a2);
		}

	};
}

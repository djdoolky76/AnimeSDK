#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FA26754184C820E3__CTOR_OFFSET UNITYSDK_OFFSET(0x4406CE0)

inline static constexpr unsigned int FA26754184C820E3_TypeDefinitionIndex = 19465;

class FA26754184C820E3 : public ::System::Object
{
public:
	::System::Boolean A60D36A71E5F8E6D; // 0x10
	::System::Boolean BF16AF60C23CAFE8; // 0x11
	::System::Boolean FA76F7C731C7BDB3; // 0x12
	::System::Byte _padding0[0x5];
	::System::String* B960AC235824C6C8; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA26754184C820E3__CTOR_OFFSET))(this);
	}
};

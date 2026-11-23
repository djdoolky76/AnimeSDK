#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F5F7A3E572FBB27E.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A08E68B0667300C4_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x238EB90)
#define A08E68B0667300C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A08E68B0667300C4_TypeDefinitionIndex = 3507;

class A08E68B0667300C4 : public ::System::Object
{
public:
	::System::Boolean F7B5E137E201C6C5; // 0x10
	::System::Byte _padding0[0x7];
	::System::UInt64 EC3775636FA81876; // 0x18
	::F5F7A3E572FBB27E AD13C6A9CD32769F; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A08E68B0667300C4__CTOR_OFFSET))(this);
	}

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + A08E68B0667300C4_EA28CF291EBB2931_OFFSET))(this);
	}
};

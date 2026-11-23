#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/E13A0D8F5AE46E00.h"
#include "unitysdk/System/Object.h"

class E4FDF0553CEEC53E;

#define B9D5FF16F4ECA641__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B9D5FF16F4ECA641_TypeDefinitionIndex = 398;

class B9D5FF16F4ECA641 : public ::System::Object
{
public:
	::E68AA4EB51923C98::E13A0D8F5AE46E00 FD499F2ABAA4019F; // 0x10
	::System::Byte _padding0[0x4];
	::E4FDF0553CEEC53E* BC4278022A37BBA4; // 0x18
	::System::UInt32 E806ACF49ABB607D; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B9D5FF16F4ECA641__CTOR_OFFSET))(this);
	}
};

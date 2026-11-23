#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"
#include "unitysdk/E68AA4EB51923C98/EB78EE211690788A.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;
namespace System { class String; }

#define BA725E3AF08F825D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BA725E3AF08F825D_TypeDefinitionIndex = 2756;

class BA725E3AF08F825D : public ::System::Object
{
public:
	::AB642D1382756991* FD3F3AA917AB4AB9; // 0x10
	::AB642D1382756991* B077D9A4B4D55F40; // 0x18
	::E12F55A5FCCCF1EC AA265DB7AD27CAEF; // 0x20
	::E68AA4EB51923C98::EB78EE211690788A E30AC13B4E2DDDEB; // 0x28
	::System::Byte _padding0[0x4];
	::System::String* F80FC33CE8AE4B3B; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA725E3AF08F825D__CTOR_OFFSET))(this);
	}
};

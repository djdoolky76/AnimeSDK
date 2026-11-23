#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A375536B9B082594.h"

#define B8CFB77D7DE0619A_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x1789720)
#define B8CFB77D7DE0619A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16514A0)
#define B8CFB77D7DE0619A__CTOR_OFFSET UNITYSDK_OFFSET(0x17897D0)

inline static constexpr unsigned int B8CFB77D7DE0619A_TypeDefinitionIndex = 110;

class B8CFB77D7DE0619A : public ::A375536B9B082594
{
public:
	::System::Single F2F8A61F63A2CE35; // 0x10
	::System::Single FE7561E061067628; // 0x14
	::System::Boolean AE6DC46124B87215; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single F2D7A14DBB30D0CF; // 0x1C

	::System::Void _ctor(::B8CFB77D7DE0619A* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::B8CFB77D7DE0619A*))((::PBYTE)hIl2Cpp + B8CFB77D7DE0619A__CTOR_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8CFB77D7DE0619A__CTOR_1_OFFSET))(this);
	}

	::A375536B9B082594* A4CFF253D56ECB2D()
	{
		return ((::A375536B9B082594*(*)(::PVOID))((::PBYTE)hIl2Cpp + B8CFB77D7DE0619A_A4CFF253D56ECB2D_OFFSET))(this);
	}
};

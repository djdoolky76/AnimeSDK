#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A375536B9B082594.h"

#define F037295EE4338F11_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x1872B30)
#define F037295EE4338F11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1872BE0)
#define F037295EE4338F11__CTOR_OFFSET UNITYSDK_OFFSET(0x17B7770)

inline static constexpr unsigned int F037295EE4338F11_TypeDefinitionIndex = 1270;

class F037295EE4338F11 : public ::A375536B9B082594
{
public:
	::System::Boolean B13563B335097922; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single FA9B138C439517D6; // 0x14
	::System::Single A94D3CF24D4C5C07; // 0x18
	::System::Boolean BED67D38517D76FA; // 0x1C

	::A375536B9B082594* A4CFF253D56ECB2D()
	{
		return ((::A375536B9B082594*(*)(::PVOID))((::PBYTE)hIl2Cpp + F037295EE4338F11_A4CFF253D56ECB2D_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F037295EE4338F11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::F037295EE4338F11* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::F037295EE4338F11*))((::PBYTE)hIl2Cpp + F037295EE4338F11__CTOR_1_OFFSET))(this, BEEE7A5A60941632);
	}
};

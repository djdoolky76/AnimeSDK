#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E941FE2D6FB8AB46.h"

class AB642D1382756991;

#define BDE3BABF3DDF6655_A3A0405169EABB6A_OFFSET UNITYSDK_OFFSET(0x197AF10)
#define BDE3BABF3DDF6655__CTOR_OFFSET UNITYSDK_OFFSET(0x197B290)

inline static constexpr unsigned int BDE3BABF3DDF6655_TypeDefinitionIndex = 1655;

class BDE3BABF3DDF6655 : public ::E941FE2D6FB8AB46
{
public:
	::System::Void A3A0405169EABB6A(::AB642D1382756991* EEF688477002B28B)
	{
		return ((::System::Void(*)(::PVOID, ::AB642D1382756991*))((::PBYTE)hIl2Cpp + BDE3BABF3DDF6655_A3A0405169EABB6A_OFFSET))(this, EEF688477002B28B);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDE3BABF3DDF6655__CTOR_OFFSET))(this);
	}
};

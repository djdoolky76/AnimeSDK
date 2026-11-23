#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B4F4C69D3CB58A89.h"

namespace System { class String; }

#define F63D213D21F4041A_B6F2C1B8CF39D6C3_OFFSET UNITYSDK_OFFSET(0x204EA60)
#define F63D213D21F4041A__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F63D213D21F4041A_TypeDefinitionIndex = 8329;

class F63D213D21F4041A : public ::B4F4C69D3CB58A89
{
public:
	static ::F63D213D21F4041A* B6F2C1B8CF39D6C3(::System::String* AF34928E358AD71B)
	{
		return ((::F63D213D21F4041A*(*)(::System::String*))((::PBYTE)hIl2Cpp + F63D213D21F4041A_B6F2C1B8CF39D6C3_OFFSET))(AF34928E358AD71B);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F63D213D21F4041A__CTOR_OFFSET))(this);
	}
};

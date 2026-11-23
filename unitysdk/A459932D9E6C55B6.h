#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"

#define A459932D9E6C55B6_F1E6CFA12C174DE3_OFFSET UNITYSDK_OFFSET(0x1CE3AE0)
#define A459932D9E6C55B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE3B50)

inline static constexpr unsigned int A459932D9E6C55B6_TypeDefinitionIndex = 9832;

class A459932D9E6C55B6
{
public:
	::E12F55A5FCCCF1EC F1E6CFA12C174DE3()
	{
		return ((::E12F55A5FCCCF1EC(*)(::PVOID))((::PBYTE)hIl2Cpp + A459932D9E6C55B6_F1E6CFA12C174DE3_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A459932D9E6C55B6__CTOR_OFFSET))(this);
	}
};

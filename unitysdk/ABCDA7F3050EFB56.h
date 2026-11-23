#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"

#define ABCDA7F3050EFB56_F1E6CFA12C174DE3_OFFSET UNITYSDK_OFFSET(0x1DBB210)
#define ABCDA7F3050EFB56__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBB300)

inline static constexpr unsigned int ABCDA7F3050EFB56_TypeDefinitionIndex = 10219;

class ABCDA7F3050EFB56
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCDA7F3050EFB56__CTOR_OFFSET))(this);
	}

	::E12F55A5FCCCF1EC F1E6CFA12C174DE3()
	{
		return ((::E12F55A5FCCCF1EC(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCDA7F3050EFB56_F1E6CFA12C174DE3_OFFSET))(this);
	}
};

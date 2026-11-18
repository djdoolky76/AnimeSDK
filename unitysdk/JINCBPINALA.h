#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBKFEMNJBH.h"

#define JINCBPINALA_KGOONBDEDCJ_OFFSET UNITYSDK_OFFSET(0x1945E110)
#define JINCBPINALA_PEMLLMCAIEM_OFFSET UNITYSDK_OFFSET(0x1945E170)
#define JINCBPINALA__CTOR_OFFSET UNITYSDK_OFFSET(0x1945E160)

inline static constexpr unsigned int JINCBPINALA_TypeDefinitionIndex = 57484;

class JINCBPINALA : public ::FOBKFEMNJBH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINCBPINALA__CTOR_OFFSET))(this);
	}

	::System::Boolean KGOONBDEDCJ(::System::Boolean BJNCIGDCAJP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JINCBPINALA_KGOONBDEDCJ_OFFSET))(this, BJNCIGDCAJP);
	}

	::System::Boolean PEMLLMCAIEM(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JINCBPINALA_PEMLLMCAIEM_OFFSET))(this, MIALFKCCCPI);
	}
};

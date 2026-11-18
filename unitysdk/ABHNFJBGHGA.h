#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDOANFNDFEM.h"
#include "unitysdk/CGGLJLECNJM.h"
#include "unitysdk/JGLIFHIAIEH.h"

#define ABHNFJBGHGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2242D0)

inline static constexpr unsigned int ABHNFJBGHGA_TypeDefinitionIndex = 93364;

class ABHNFJBGHGA : public ::CGGLJLECNJM
{
public:
	::Il2CppArray<::BDOANFNDFEM>* DGDCPNBAKMF; // 0x20
	::System::UInt32 HDGIELLOOEF; // 0x28
	::JGLIFHIAIEH AKDFNJDMBLB; // 0x2C
	::JGLIFHIAIEH LIAAHAGKBDL; // 0x34
	::System::Boolean IBGBIMLBOGA; // 0x3C
	::System::Boolean LJFHODOAMDB; // 0x3D
	::System::Byte _padding0[0x2];
	::JGLIFHIAIEH EECMDPPHLAM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHNFJBGHGA__CTOR_OFFSET))(this);
	}
};

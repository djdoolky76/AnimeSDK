#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/MBMHCEJAPNA.h"

#define PHHIMLDMBFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD2F30)

inline static constexpr unsigned int PHHIMLDMBFD_TypeDefinitionIndex = 93876;

class PHHIMLDMBFD : public ::MBMHCEJAPNA
{
public:
	::System::Single EIBPJBAMGFB; // 0x28
	::System::Boolean HJCBKMJAOGK; // 0x2C
	::System::Byte _padding0[0x3];
	::JGLIFHIAIEH JJBJAHCALBE; // 0x30
	::System::UInt32 GGNMPGOBGLL; // 0x38
	::JGLIFHIAIEH EBNOEJDEGEJ; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHIMLDMBFD__CTOR_OFFSET))(this);
	}
};

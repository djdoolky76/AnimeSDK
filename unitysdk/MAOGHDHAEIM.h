#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IGAONHGMLLA_GHADLBFMNFK.h"

#define MAOGHDHAEIM_OAJEIDFGCII_OFFSET UNITYSDK_OFFSET(0x75E7A0)
#define MAOGHDHAEIM_PPGBHNIJOIB_OFFSET UNITYSDK_OFFSET(0x1568F970)
#define MAOGHDHAEIM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x75E790)
#define MAOGHDHAEIM__CTOR_OFFSET UNITYSDK_OFFSET(0x75E780)

inline static constexpr unsigned int MAOGHDHAEIM_TypeDefinitionIndex = 76045;

struct alignas(4) MAOGHDHAEIM
{
	::System::Boolean BLNAIDHHDLK; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 KFFFNKHAMGJ; // 0x14
	::System::Int32 NIPNKPPEILB; // 0x18

	::System::Void _ctor(::System::Int32 KJPNMJJONNO, ::System::Int32 DFDOKPBNGKH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MAOGHDHAEIM__CTOR_OFFSET))(this, KJPNMJJONNO, DFDOKPBNGKH);
	}

	::System::Void _ctor_1(::IGAONHGMLLA_GHADLBFMNFK PAAKENELHJL)
	{
		return ((::System::Void(*)(::PVOID, ::IGAONHGMLLA_GHADLBFMNFK))((::PBYTE)hIl2Cpp + MAOGHDHAEIM__CTOR_1_OFFSET))(this, PAAKENELHJL);
	}

	/*
	static ::MAOGHDHAEIM PPGBHNIJOIB()
	{
		return ((::MAOGHDHAEIM(*)())((::PBYTE)hIl2Cpp + MAOGHDHAEIM_PPGBHNIJOIB_OFFSET))();
	}
	*/

	::System::Boolean OAJEIDFGCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOGHDHAEIM_OAJEIDFGCII_OFFSET))(this);
	}
};

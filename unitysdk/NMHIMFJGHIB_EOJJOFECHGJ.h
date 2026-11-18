#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMHIMFJGHIB_CFGBBPPMLHK.h"
#include "unitysdk/System/ValueType.h"

#define NMHIMFJGHIB_EOJJOFECHGJ_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x6CA2C0)
#define NMHIMFJGHIB_EOJJOFECHGJ__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6CA260)
#define NMHIMFJGHIB_EOJJOFECHGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x6CA230)

inline static constexpr unsigned int NMHIMFJGHIB_EOJJOFECHGJ_TypeDefinitionIndex = 43793;

struct alignas(4) NMHIMFJGHIB_EOJJOFECHGJ
{
	::NMHIMFJGHIB_CFGBBPPMLHK GGMFAKFFLCF; // 0x10
	::System::Single ODEEJCPBCMM; // 0x14
	::System::Single BPABEFPJLKO; // 0x18

	::System::Void _ctor(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMHIMFJGHIB_EOJJOFECHGJ__CTOR_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void _ctor_1(::System::Single EJCBEJMGFAJ, ::System::Single EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NMHIMFJGHIB_EOJJOFECHGJ__CTOR_1_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHIMFJGHIB_EOJJOFECHGJ_JDAPDDEOCEA_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PECMIBGENCL;

#define PECMIBGENCL_CKNELIFMABL_HAGJHJJCJEK_OFFSET UNITYSDK_OFFSET(0x178C1130)
#define PECMIBGENCL_CKNELIFMABL__CTOR_OFFSET UNITYSDK_OFFSET(0x178C1120)

inline static constexpr unsigned int PECMIBGENCL_CKNELIFMABL_TypeDefinitionIndex = 41037;

class PECMIBGENCL_CKNELIFMABL : public ::System::Object
{
public:
	::PECMIBGENCL* KLHPEBKNIFB; // 0x10
	::System::Int32 EOGLMAEPALE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECMIBGENCL_CKNELIFMABL__CTOR_OFFSET))(this);
	}

	::System::Boolean HAGJHJJCJEK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PECMIBGENCL_CKNELIFMABL_HAGJHJJCJEK_OFFSET))(this);
	}
};

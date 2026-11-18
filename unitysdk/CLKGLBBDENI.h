#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

class GOHMGCMIACH;

#define CLKGLBBDENI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E568070)

inline static constexpr unsigned int CLKGLBBDENI_TypeDefinitionIndex = 95308;

class CLKGLBBDENI : public ::BIHPBFHEOOA
{
public:
	::GOHMGCMIACH* JLIIPCAFIMH; // 0x10
	::System::UInt32 KEGBFANEPBJ; // 0x18
	::System::UInt32 MKGLHHPNCMN; // 0x1C
	::System::UInt32 KKMENMCMMBN; // 0x20
	::System::UInt32 HDGIELLOOEF; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKGLBBDENI__CTOR_OFFSET))(this);
	}
};

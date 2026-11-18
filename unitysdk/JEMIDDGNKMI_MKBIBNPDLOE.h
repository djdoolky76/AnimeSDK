#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JEMIDDGNKMI_MKBIBNPDLOE_JBIICKKNIOL_OFFSET UNITYSDK_OFFSET(0x18A10600)
#define JEMIDDGNKMI_MKBIBNPDLOE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A105F0)

inline static constexpr unsigned int JEMIDDGNKMI_MKBIBNPDLOE_TypeDefinitionIndex = 85621;

class JEMIDDGNKMI_MKBIBNPDLOE : public ::System::Object
{
public:
	::System::Int32 COMDNFILAIC; // 0x10
	::System::Single BKKFHCFHAED; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMIDDGNKMI_MKBIBNPDLOE__CTOR_OFFSET))(this);
	}

	::System::Void JBIICKKNIOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMIDDGNKMI_MKBIBNPDLOE_JBIICKKNIOL_OFFSET))(this);
	}
};

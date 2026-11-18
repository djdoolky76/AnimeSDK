#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LLAKLLFJAAD;

#define IIPCNPLHAED_FDAMAEGLPPB_CNMHCPNNEIK_OFFSET UNITYSDK_OFFSET(0x13AA6890)
#define IIPCNPLHAED_FDAMAEGLPPB__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA6880)

inline static constexpr unsigned int IIPCNPLHAED_FDAMAEGLPPB_TypeDefinitionIndex = 57176;

class IIPCNPLHAED_FDAMAEGLPPB : public ::System::Object
{
public:
	::LLAKLLFJAAD* LJBPECKCCEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPCNPLHAED_FDAMAEGLPPB__CTOR_OFFSET))(this);
	}

	::System::Void CNMHCPNNEIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPCNPLHAED_FDAMAEGLPPB_CNMHCPNNEIK_OFFSET))(this);
	}
};

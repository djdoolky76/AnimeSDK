#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define AONEBGONEEO_FFNEGKJMJEA_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x1700D160)
#define AONEBGONEEO_FFNEGKJMJEA_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1700D0C0)
#define AONEBGONEEO_FFNEGKJMJEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1700D0B0)

inline static constexpr unsigned int AONEBGONEEO_FFNEGKJMJEA_TypeDefinitionIndex = 90155;

class AONEBGONEEO_FFNEGKJMJEA : public ::System::Object
{
public:
	::HOCDHMEPPEG GPELAKKMLBG; // 0x10
	::HOCDHMEPPEG ABMKEFPKPMD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONEBGONEEO_FFNEGKJMJEA__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONEBGONEEO_FFNEGKJMJEA_LIDNPLMPHAL_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONEBGONEEO_FFNEGKJMJEA_AAHMACBDCPN_OFFSET))(this);
	}
};

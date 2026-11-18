#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKOMAFPIPMA_DKCFBCFGADG;
class OIGBHACJLFF;

#define FOKGKJFCLIK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x156D1D90)
#define FOKGKJFCLIK__CTOR_OFFSET UNITYSDK_OFFSET(0x156D1D80)

inline static constexpr unsigned int FOKGKJFCLIK_TypeDefinitionIndex = 70671;

class FOKGKJFCLIK : public ::System::Object
{
public:
	::OIGBHACJLFF* CADEGJFFEPP; // 0x10
	::OIGBHACJLFF* GCDPDIFPLAD; // 0x18
	::EKOMAFPIPMA_DKCFBCFGADG* FHKMEKCPNPP; // 0x20
	::EKOMAFPIPMA_DKCFBCFGADG* MIBGCLBFJKE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKGKJFCLIK__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKGKJFCLIK_PHOADBJGFBE_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"
#include "unitysdk/LOLGBJOCMCF.h"

#define DKKKILJCLEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E103430)

inline static constexpr unsigned int DKKKILJCLEF_TypeDefinitionIndex = 94754;

class DKKKILJCLEF : public ::CGGLJLECNJM
{
public:
	::System::Int32 CIIGCDOADJC; // 0x20
	::LOLGBJOCMCF IIDKBMFGAOL; // 0x24
	::System::Int32 ECAFPALMHLI; // 0x28
	::System::UInt32 HDGIELLOOEF; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKKILJCLEF__CTOR_OFFSET))(this);
	}
};

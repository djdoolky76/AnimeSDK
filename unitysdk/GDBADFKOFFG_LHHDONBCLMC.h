#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GDBADFKOFFG_LHHDONBCLMC_KDMGANEAGGA_OFFSET UNITYSDK_OFFSET(0x10EE3320)
#define GDBADFKOFFG_LHHDONBCLMC__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE3310)

inline static constexpr unsigned int GDBADFKOFFG_LHHDONBCLMC_TypeDefinitionIndex = 74122;

class GDBADFKOFFG_LHHDONBCLMC : public ::System::Object
{
public:
	::System::UInt32 BKLGNCBNEGM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_LHHDONBCLMC__CTOR_OFFSET))(this);
	}

	::System::Boolean KDMGANEAGGA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_LHHDONBCLMC_KDMGANEAGGA_OFFSET))(this);
	}
};

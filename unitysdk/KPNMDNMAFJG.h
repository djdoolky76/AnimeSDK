#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMDPLHBLFJH.h"

class BCOFOFCAODO;
class BOJBNJKFGMN;

#define KPNMDNMAFJG_GGKCBOJFJEJ_OFFSET UNITYSDK_OFFSET(0x17937F50)
#define KPNMDNMAFJG__CTOR_OFFSET UNITYSDK_OFFSET(0x17937F40)

inline static constexpr unsigned int KPNMDNMAFJG_TypeDefinitionIndex = 45609;

class KPNMDNMAFJG : public ::KMDPLHBLFJH
{
public:
	::System::Void _ctor(::BCOFOFCAODO* FAIPFCNDLDE)
	{
		return ((::System::Void(*)(::PVOID, ::BCOFOFCAODO*))((::PBYTE)hIl2Cpp + KPNMDNMAFJG__CTOR_OFFSET))(this, FAIPFCNDLDE);
	}

	::BOJBNJKFGMN* GGKCBOJFJEJ()
	{
		return ((::BOJBNJKFGMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNMDNMAFJG_GGKCBOJFJEJ_OFFSET))(this);
	}
};

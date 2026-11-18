#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLOFFKBAMLM.h"
#include "unitysdk/System/Object.h"

class ILMKONAJBGC;

#define ILMKONAJBGC_DICKPDCHEBN_BDELNOKCKHB_OFFSET UNITYSDK_OFFSET(0x16AA7F90)
#define ILMKONAJBGC_DICKPDCHEBN__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA7F80)

inline static constexpr unsigned int ILMKONAJBGC_DICKPDCHEBN_TypeDefinitionIndex = 88924;

class ILMKONAJBGC_DICKPDCHEBN : public ::System::Object
{
public:
	::ILMKONAJBGC* KLHPEBKNIFB; // 0x10
	::OLOFFKBAMLM NHADJLAJOFK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMKONAJBGC_DICKPDCHEBN__CTOR_OFFSET))(this);
	}

	::System::Void BDELNOKCKHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMKONAJBGC_DICKPDCHEBN_BDELNOKCKHB_OFFSET))(this);
	}
};

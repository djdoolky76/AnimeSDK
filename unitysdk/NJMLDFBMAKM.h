#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NADMKNEODPN.h"
#include "unitysdk/System/ValueType.h"

class GPMDLEDECJN;

#define NJMLDFBMAKM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x6CA190)

inline static constexpr unsigned int NJMLDFBMAKM_TypeDefinitionIndex = 54886;

struct alignas(8) NJMLDFBMAKM
{
	::NADMKNEODPN KEHECMCDLFC; // 0x10
	::GPMDLEDECJN* AEAFLLDMMPH; // 0x28

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMLDFBMAKM_NPOLNFDBOOD_OFFSET))(this);
	}
};

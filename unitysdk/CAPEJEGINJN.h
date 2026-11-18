#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBJBHFINOOG_KAOPLFCLKEE.h"
#include "unitysdk/System/Object.h"

#define CAPEJEGINJN_AMGBGFDJNFG_OFFSET UNITYSDK_OFFSET(0x128C3AF0)
#define CAPEJEGINJN_AOLKFIKCNOH_OFFSET UNITYSDK_OFFSET(0x128C3B40)

inline static constexpr unsigned int CAPEJEGINJN_TypeDefinitionIndex = 60857;

class CAPEJEGINJN : public ::System::Object
{
public:
	static ::System::Boolean AMGBGFDJNFG(::IBJBHFINOOG_KAOPLFCLKEE OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::IBJBHFINOOG_KAOPLFCLKEE))((::PBYTE)hIl2Cpp + CAPEJEGINJN_AMGBGFDJNFG_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Boolean AOLKFIKCNOH(::IBJBHFINOOG_KAOPLFCLKEE OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::IBJBHFINOOG_KAOPLFCLKEE))((::PBYTE)hIl2Cpp + CAPEJEGINJN_AOLKFIKCNOH_OFFSET))(OBNIAHNMHPF);
	}
};

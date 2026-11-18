#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EUIType.h"
#include "unitysdk/System/Object.h"

class DIIKMPNCJPA;

#define DIIKMPNCJPA_BEAEFMHPAEM_PMDHBHANHPI_OFFSET UNITYSDK_OFFSET(0x1343FEA0)
#define DIIKMPNCJPA_BEAEFMHPAEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1343FE90)

inline static constexpr unsigned int DIIKMPNCJPA_BEAEFMHPAEM_TypeDefinitionIndex = 87540;

class DIIKMPNCJPA_BEAEFMHPAEM : public ::System::Object
{
public:
	::DIIKMPNCJPA* KLHPEBKNIFB; // 0x10
	::Share::EUIType JAFKJKEIHHI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIKMPNCJPA_BEAEFMHPAEM__CTOR_OFFSET))(this);
	}

	::System::Void PMDHBHANHPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIKMPNCJPA_BEAEFMHPAEM_PMDHBHANHPI_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;

#define PCMENEMPLGF_ALJPFPGKADN_CLBOIOHMFCI_OFFSET UNITYSDK_OFFSET(0x173145B0)
#define PCMENEMPLGF_ALJPFPGKADN__CTOR_OFFSET UNITYSDK_OFFSET(0x173145A0)

inline static constexpr unsigned int PCMENEMPLGF_ALJPFPGKADN_TypeDefinitionIndex = 62832;

class PCMENEMPLGF_ALJPFPGKADN : public ::System::Object
{
public:
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x10
	::System::Int32 IPBFNIPPMBJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_ALJPFPGKADN__CTOR_OFFSET))(this);
	}

	::System::Void CLBOIOHMFCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_ALJPFPGKADN_CLBOIOHMFCI_OFFSET))(this);
	}
};

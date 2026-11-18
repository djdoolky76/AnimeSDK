#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;
class OENILDODCBF;
class PCMENEMPLGF;

#define PCMENEMPLGF_OBBOCMIBHCH_CGMHLKFDPCI_OFFSET UNITYSDK_OFFSET(0x136EBEA0)
#define PCMENEMPLGF_OBBOCMIBHCH__CTOR_OFFSET UNITYSDK_OFFSET(0x136EBE90)

inline static constexpr unsigned int PCMENEMPLGF_OBBOCMIBHCH_TypeDefinitionIndex = 62865;

class PCMENEMPLGF_OBBOCMIBHCH : public ::System::Object
{
public:
	::FMHDMLBDIJC* PADJNMGMGHO; // 0x10
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_OBBOCMIBHCH__CTOR_OFFSET))(this);
	}

	::System::Boolean CGMHLKFDPCI(::OENILDODCBF* HELCLJNPANF)
	{
		return ((::System::Boolean(*)(::PVOID, ::OENILDODCBF*))((::PBYTE)hIl2Cpp + PCMENEMPLGF_OBBOCMIBHCH_CGMHLKFDPCI_OFFSET))(this, HELCLJNPANF);
	}
};

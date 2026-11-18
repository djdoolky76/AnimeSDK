#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T> class DFDEIDBBGHG_1;

#define HLENFIOHJFL_DIIJKDDNBCI_DOLDFGLHONI_OFFSET UNITYSDK_OFFSET(0x17B0E610)
#define HLENFIOHJFL_DIIJKDDNBCI_EKGMNPLIEGO_OFFSET UNITYSDK_OFFSET(0x17B0E600)
#define HLENFIOHJFL_DIIJKDDNBCI__CTOR_OFFSET UNITYSDK_OFFSET(0x17B0E5F0)

inline static constexpr unsigned int HLENFIOHJFL_DIIJKDDNBCI_TypeDefinitionIndex = 54201;

class HLENFIOHJFL_DIIJKDDNBCI : public ::System::Object
{
public:
	::System::Action_1<::DFDEIDBBGHG_1<::System::UInt64>*>* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLENFIOHJFL_DIIJKDDNBCI__CTOR_OFFSET))(this);
	}

	::System::Void EKGMNPLIEGO(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_DIIJKDDNBCI_EKGMNPLIEGO_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void DOLDFGLHONI(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_DIIJKDDNBCI_DOLDFGLHONI_OFFSET))(this, BHDNBGLCNOM);
	}
};

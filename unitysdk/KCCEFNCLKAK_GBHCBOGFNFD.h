#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPDDEPLBABF;

#define KCCEFNCLKAK_GBHCBOGFNFD_NBCIIJNMMCI_OFFSET UNITYSDK_OFFSET(0x13C53080)
#define KCCEFNCLKAK_GBHCBOGFNFD__CTOR_OFFSET UNITYSDK_OFFSET(0x13C53070)

inline static constexpr unsigned int KCCEFNCLKAK_GBHCBOGFNFD_TypeDefinitionIndex = 83893;

class KCCEFNCLKAK_GBHCBOGFNFD : public ::System::Object
{
public:
	::BPDDEPLBABF* BCPHAGODEBM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCEFNCLKAK_GBHCBOGFNFD__CTOR_OFFSET))(this);
	}

	::System::Void NBCIIJNMMCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCEFNCLKAK_GBHCBOGFNFD_NBCIIJNMMCI_OFFSET))(this);
	}
};

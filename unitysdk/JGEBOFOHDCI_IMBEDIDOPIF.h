#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;
class JGEBOFOHDCI;

#define JGEBOFOHDCI_IMBEDIDOPIF_NFNHPCJCFEC_OFFSET UNITYSDK_OFFSET(0x14FB2740)
#define JGEBOFOHDCI_IMBEDIDOPIF__CTOR_OFFSET UNITYSDK_OFFSET(0x14FB2730)

inline static constexpr unsigned int JGEBOFOHDCI_IMBEDIDOPIF_TypeDefinitionIndex = 70283;

class JGEBOFOHDCI_IMBEDIDOPIF : public ::System::Object
{
public:
	::JGEBOFOHDCI* KLHPEBKNIFB; // 0x10
	::FMHDMLBDIJC* EOGLMAEPALE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_IMBEDIDOPIF__CTOR_OFFSET))(this);
	}

	::System::Void NFNHPCJCFEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_IMBEDIDOPIF_NFNHPCJCFEC_OFFSET))(this);
	}
};

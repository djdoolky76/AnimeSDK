#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;
class JGEBOFOHDCI;
class OENILDODCBF;

#define JGEBOFOHDCI_PPHMPDMAGCC_CGMHLKFDPCI_OFFSET UNITYSDK_OFFSET(0x198B83C0)
#define JGEBOFOHDCI_PPHMPDMAGCC__CTOR_OFFSET UNITYSDK_OFFSET(0x198B83B0)

inline static constexpr unsigned int JGEBOFOHDCI_PPHMPDMAGCC_TypeDefinitionIndex = 70285;

class JGEBOFOHDCI_PPHMPDMAGCC : public ::System::Object
{
public:
	::JGEBOFOHDCI* KLHPEBKNIFB; // 0x10
	::FMHDMLBDIJC* PADJNMGMGHO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_PPHMPDMAGCC__CTOR_OFFSET))(this);
	}

	::System::Boolean CGMHLKFDPCI(::OENILDODCBF* HELCLJNPANF)
	{
		return ((::System::Boolean(*)(::PVOID, ::OENILDODCBF*))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_PPHMPDMAGCC_CGMHLKFDPCI_OFFSET))(this, HELCLJNPANF);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCPFJIOFEKC.h"
#include "unitysdk/EDGGFNEELGN.h"

#define FAJPHJHPHPF_MHCOEJFCDJH_OFFSET UNITYSDK_OFFSET(0x1F307E50)
#define FAJPHJHPHPF_NIADMEBFPBA_OFFSET UNITYSDK_OFFSET(0x1F307E40)
#define FAJPHJHPHPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1F307EA0)

inline static constexpr unsigned int FAJPHJHPHPF_TypeDefinitionIndex = 28765;

class FAJPHJHPHPF : public ::CCPFJIOFEKC
{
public:
	::System::Single KHLEEAFOGMG; // 0x10
	::System::Single FOGJCJCLMMB; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJPHJHPHPF__CTOR_OFFSET))(this);
	}

	::EDGGFNEELGN NIADMEBFPBA()
	{
		return ((::EDGGFNEELGN(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJPHJHPHPF_NIADMEBFPBA_OFFSET))(this);
	}

	::System::Single MHCOEJFCDJH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJPHJHPHPF_MHCOEJFCDJH_OFFSET))(this);
	}
};

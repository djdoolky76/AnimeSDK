#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKCHMNHLJLJ.h"
#include "unitysdk/NBLDIEPEEJN.h"

#define GPCDIIAOPLD_LLJMEOJPAGF_OFFSET UNITYSDK_OFFSET(0x16F10360)
#define GPCDIIAOPLD__CTOR_OFFSET UNITYSDK_OFFSET(0x16F103D0)

inline static constexpr unsigned int GPCDIIAOPLD_TypeDefinitionIndex = 72434;

class GPCDIIAOPLD : public ::LKCHMNHLJLJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCDIIAOPLD__CTOR_OFFSET))(this);
	}

	::System::Void LLJMEOJPAGF(::System::Single GNBINLMFIGL, ::System::Single CGLONFAIHBO, ::Il2CppArray<::NBLDIEPEEJN>* OMOKFNFCMFG, ::Il2CppArray<::NBLDIEPEEJN>* OJLAJICGNLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Il2CppArray<::NBLDIEPEEJN>*, ::Il2CppArray<::NBLDIEPEEJN>*))((::PBYTE)hIl2Cpp + GPCDIIAOPLD_LLJMEOJPAGF_OFFSET))(this, GNBINLMFIGL, CGLONFAIHBO, OMOKFNFCMFG, OJLAJICGNLN);
	}
};

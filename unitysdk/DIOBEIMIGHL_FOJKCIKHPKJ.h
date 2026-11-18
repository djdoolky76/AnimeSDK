#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNPHNIKEBAL;
class DNMCLPIJLHI;
class MMLHLGHCMKA;

#define DIOBEIMIGHL_FOJKCIKHPKJ_GJHEBGCDJKF_OFFSET UNITYSDK_OFFSET(0x1F392800)
#define DIOBEIMIGHL_FOJKCIKHPKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3927F0)

inline static constexpr unsigned int DIOBEIMIGHL_FOJKCIKHPKJ_TypeDefinitionIndex = 95327;

class DIOBEIMIGHL_FOJKCIKHPKJ : public ::System::Object
{
public:
	::MMLHLGHCMKA* FPFDCAPADGE; // 0x10
	::DNMCLPIJLHI* AAOCANGHBDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOBEIMIGHL_FOJKCIKHPKJ__CTOR_OFFSET))(this);
	}

	::System::Void GJHEBGCDJKF(::BNPHNIKEBAL* HACJFKBLODH)
	{
		return ((::System::Void(*)(::PVOID, ::BNPHNIKEBAL*))((::PBYTE)hIl2Cpp + DIOBEIMIGHL_FOJKCIKHPKJ_GJHEBGCDJKF_OFFSET))(this, HACJFKBLODH);
	}
};

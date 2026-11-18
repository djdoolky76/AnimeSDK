#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;

#define PCMENEMPLGF_GABNLLIPPLN_BIEADFNEGGI_OFFSET UNITYSDK_OFFSET(0x16F9DB30)
#define PCMENEMPLGF_GABNLLIPPLN__CTOR_OFFSET UNITYSDK_OFFSET(0x16F9DB20)

inline static constexpr unsigned int PCMENEMPLGF_GABNLLIPPLN_TypeDefinitionIndex = 62867;

class PCMENEMPLGF_GABNLLIPPLN : public ::System::Object
{
public:
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x10
	::System::Int32 GMDOFLBIICM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_GABNLLIPPLN__CTOR_OFFSET))(this);
	}

	::System::Void BIEADFNEGGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_GABNLLIPPLN_BIEADFNEGGI_OFFSET))(this);
	}
};

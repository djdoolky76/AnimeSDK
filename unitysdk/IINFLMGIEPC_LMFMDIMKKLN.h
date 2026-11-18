#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LFPLBFJDAML;

#define IINFLMGIEPC_LMFMDIMKKLN_NLOFIIGCMCD_OFFSET UNITYSDK_OFFSET(0x141EF710)
#define IINFLMGIEPC_LMFMDIMKKLN__CTOR_OFFSET UNITYSDK_OFFSET(0x141E3630)

inline static constexpr unsigned int IINFLMGIEPC_LMFMDIMKKLN_TypeDefinitionIndex = 45597;

class IINFLMGIEPC_LMFMDIMKKLN : public ::System::Object
{
public:
	::System::Int32 NEBEGCNKEBI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IINFLMGIEPC_LMFMDIMKKLN__CTOR_OFFSET))(this);
	}

	::System::Boolean NLOFIIGCMCD(::LFPLBFJDAML* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::LFPLBFJDAML*))((::PBYTE)hIl2Cpp + IINFLMGIEPC_LMFMDIMKKLN_NLOFIIGCMCD_OFFSET))(this, IPMMCGDMODG);
	}
};

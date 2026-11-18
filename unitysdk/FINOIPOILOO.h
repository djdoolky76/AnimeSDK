#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define FINOIPOILOO_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x10EBAAB0)
#define FINOIPOILOO__CTOR_OFFSET UNITYSDK_OFFSET(0x10EBAB70)

inline static constexpr unsigned int FINOIPOILOO_TypeDefinitionIndex = 70997;

class FINOIPOILOO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINOIPOILOO__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + FINOIPOILOO_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};

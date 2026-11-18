#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define LFFPEEGFJCC_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x14DA27C0)
#define LFFPEEGFJCC__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA2880)

inline static constexpr unsigned int LFFPEEGFJCC_TypeDefinitionIndex = 72118;

class LFFPEEGFJCC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFPEEGFJCC__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + LFFPEEGFJCC_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};

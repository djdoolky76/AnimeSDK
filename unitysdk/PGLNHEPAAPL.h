#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define PGLNHEPAAPL_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x1C1D3A80)
#define PGLNHEPAAPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D3C10)

inline static constexpr unsigned int PGLNHEPAAPL_TypeDefinitionIndex = 83132;

class PGLNHEPAAPL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLNHEPAAPL__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + PGLNHEPAAPL_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};

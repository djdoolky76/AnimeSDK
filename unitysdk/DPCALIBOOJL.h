#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define DPCALIBOOJL_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x10F189D0)
#define DPCALIBOOJL__CTOR_OFFSET UNITYSDK_OFFSET(0x10F18A50)

inline static constexpr unsigned int DPCALIBOOJL_TypeDefinitionIndex = 38580;

class DPCALIBOOJL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCALIBOOJL__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + DPCALIBOOJL_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};

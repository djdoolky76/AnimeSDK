#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define NGEJAPGGOCK_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x137567E0)
#define NGEJAPGGOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x13756870)

inline static constexpr unsigned int NGEJAPGGOCK_TypeDefinitionIndex = 63460;

class NGEJAPGGOCK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEJAPGGOCK__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + NGEJAPGGOCK_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};

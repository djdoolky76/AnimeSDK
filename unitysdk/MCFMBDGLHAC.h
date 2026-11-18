#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCPJCJAGGGA;

#define MCFMBDGLHAC_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x14DDA4F0)
#define MCFMBDGLHAC__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDA570)

inline static constexpr unsigned int MCFMBDGLHAC_TypeDefinitionIndex = 86862;

class MCFMBDGLHAC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFMBDGLHAC__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::KCPJCJAGGGA* FFKBEGIHIGG, ::KCPJCJAGGGA* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::KCPJCJAGGGA*, ::KCPJCJAGGGA*))((::PBYTE)hIl2Cpp + MCFMBDGLHAC_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};

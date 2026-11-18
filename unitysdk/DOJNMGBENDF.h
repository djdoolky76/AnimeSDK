#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define DOJNMGBENDF_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x7FDDD00)
#define DOJNMGBENDF__CTOR_OFFSET UNITYSDK_OFFSET(0x7FDDF20)

inline static constexpr unsigned int DOJNMGBENDF_TypeDefinitionIndex = 45195;

class DOJNMGBENDF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJNMGBENDF__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + DOJNMGBENDF_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};

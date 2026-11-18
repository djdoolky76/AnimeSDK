#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJPEEJFNCHL;

#define AJJKJNPEHCH_BADDEEGHNKH_ADAMIDFCHKD_OFFSET UNITYSDK_OFFSET(0x16482460)
#define AJJKJNPEHCH_BADDEEGHNKH__CTOR_OFFSET UNITYSDK_OFFSET(0x16482450)

inline static constexpr unsigned int AJJKJNPEHCH_BADDEEGHNKH_TypeDefinitionIndex = 83676;

class AJJKJNPEHCH_BADDEEGHNKH : public ::System::Object
{
public:
	::System::Int32 LGKIDBDPEFH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_BADDEEGHNKH__CTOR_OFFSET))(this);
	}

	::System::Boolean ADAMIDFCHKD(::DJPEEJFNCHL* MDLNMDJMMJP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJPEEJFNCHL*))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_BADDEEGHNKH_ADAMIDFCHKD_OFFSET))(this, MDLNMDJMMJP);
	}
};

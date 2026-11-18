#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAOFCEFPEHP;

#define HKALFIGEALD_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x15B61B90)
#define HKALFIGEALD__CTOR_OFFSET UNITYSDK_OFFSET(0x15B61D80)

inline static constexpr unsigned int HKALFIGEALD_TypeDefinitionIndex = 67254;

class HKALFIGEALD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKALFIGEALD__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::OAOFCEFPEHP* FFKBEGIHIGG, ::OAOFCEFPEHP* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::OAOFCEFPEHP*, ::OAOFCEFPEHP*))((::PBYTE)hIl2Cpp + HKALFIGEALD_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};

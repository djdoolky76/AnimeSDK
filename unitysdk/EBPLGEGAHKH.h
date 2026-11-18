#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAOFCEFPEHP;

#define EBPLGEGAHKH_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x169897D0)
#define EBPLGEGAHKH__CTOR_OFFSET UNITYSDK_OFFSET(0x169899C0)

inline static constexpr unsigned int EBPLGEGAHKH_TypeDefinitionIndex = 55738;

class EBPLGEGAHKH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPLGEGAHKH__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::OAOFCEFPEHP* FFKBEGIHIGG, ::OAOFCEFPEHP* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::OAOFCEFPEHP*, ::OAOFCEFPEHP*))((::PBYTE)hIl2Cpp + EBPLGEGAHKH_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};

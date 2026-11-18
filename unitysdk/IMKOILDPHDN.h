#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define IMKOILDPHDN_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x197E0D40)
#define IMKOILDPHDN__CTOR_OFFSET UNITYSDK_OFFSET(0x197E0EA0)

inline static constexpr unsigned int IMKOILDPHDN_TypeDefinitionIndex = 68206;

class IMKOILDPHDN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKOILDPHDN__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + IMKOILDPHDN_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};

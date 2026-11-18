#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJKEFAKAIHI.h"

#define FEIIJNEGOBF_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0x1F63A2E0)
#define FEIIJNEGOBF_OJFBBOMGIEN_OFFSET UNITYSDK_OFFSET(0x1F63A060)
#define FEIIJNEGOBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1F63A260)

inline static constexpr unsigned int FEIIJNEGOBF_TypeDefinitionIndex = 94710;

class FEIIJNEGOBF : public ::MJKEFAKAIHI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIIJNEGOBF__CTOR_OFFSET))(this);
	}

	::System::Void OJFBBOMGIEN(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FEIIJNEGOBF_OJFBBOMGIEN_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void INEGOEGIOKM(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FEIIJNEGOBF_INEGOEGIOKM_OFFSET))(this, MIALFKCCCPI);
	}
};

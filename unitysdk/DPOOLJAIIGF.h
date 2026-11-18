#pragma once
#include "unitysdk/unitysdk.h"

#define DPOOLJAIIGF_DANBJDFLBNK_OFFSET UNITYSDK_OFFSET(0xFDCD3F0)
#define DPOOLJAIIGF__CTOR_OFFSET UNITYSDK_OFFSET(0xFDCD430)

inline static constexpr unsigned int DPOOLJAIIGF_TypeDefinitionIndex = 51425;

class DPOOLJAIIGF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOOLJAIIGF__CTOR_OFFSET))(this);
	}

	::System::Void DANBJDFLBNK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOOLJAIIGF_DANBJDFLBNK_OFFSET))(this);
	}
};

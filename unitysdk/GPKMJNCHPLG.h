#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIPAOOIIBJH.h"

#define GPKMJNCHPLG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x15D91330)
#define GPKMJNCHPLG__CTOR_OFFSET UNITYSDK_OFFSET(0x15D91320)

inline static constexpr unsigned int GPKMJNCHPLG_TypeDefinitionIndex = 88768;

class GPKMJNCHPLG : public ::PIPAOOIIBJH
{
public:
	::System::Single JBGLCAFPGHK; // 0x10
	::System::Single BDEDDEGJFKL; // 0x14
	::System::Single KKAMDFNMMJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKMJNCHPLG__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKMJNCHPLG_NPOLNFDBOOD_OFFSET))(this);
	}
};

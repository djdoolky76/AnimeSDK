#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIPAOOIIBJH.h"

#define JGDPHEKIFKD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1A475240)
#define JGDPHEKIFKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A475230)

inline static constexpr unsigned int JGDPHEKIFKD_TypeDefinitionIndex = 87837;

class JGDPHEKIFKD : public ::PIPAOOIIBJH
{
public:
	::System::Single CGDOFPGLLLF; // 0x10
	::System::Single ECJAMJMHLAG; // 0x14
	::System::Single FJDMDOONDFG; // 0x18
	::System::Single ELHMOANKHFM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDPHEKIFKD__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDPHEKIFKD_NPOLNFDBOOD_OFFSET))(this);
	}
};

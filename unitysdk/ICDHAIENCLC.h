#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIPAOOIIBJH.h"

#define ICDHAIENCLC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x101305F0)
#define ICDHAIENCLC__CTOR_OFFSET UNITYSDK_OFFSET(0x101305E0)

inline static constexpr unsigned int ICDHAIENCLC_TypeDefinitionIndex = 76879;

class ICDHAIENCLC : public ::PIPAOOIIBJH
{
public:
	::System::Single CCNBONGLPPH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDHAIENCLC__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDHAIENCLC_NPOLNFDBOOD_OFFSET))(this);
	}
};

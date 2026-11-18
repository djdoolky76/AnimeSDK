#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"

#define IFJLJCOALAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6F8F0)

inline static constexpr unsigned int IFJLJCOALAC_TypeDefinitionIndex = 95189;

class IFJLJCOALAC : public ::CGGLJLECNJM
{
public:
	::System::UInt32 MGMDLMBEDJF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJLJCOALAC__CTOR_OFFSET))(this);
	}
};

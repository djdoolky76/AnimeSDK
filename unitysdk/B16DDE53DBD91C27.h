#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EC843DC088FA8A94.h"

#define B16DDE53DBD91C27_B3709A8BA4A7CD8B_OFFSET UNITYSDK_OFFSET(0x2262390)
#define B16DDE53DBD91C27_E89C2B8E3313D783_OFFSET UNITYSDK_OFFSET(0x2262400)
#define B16DDE53DBD91C27__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B16DDE53DBD91C27_TypeDefinitionIndex = 6905;

class B16DDE53DBD91C27 : public ::EC843DC088FA8A94
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B16DDE53DBD91C27__CTOR_OFFSET))(this);
	}

	::System::Void E89C2B8E3313D783()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B16DDE53DBD91C27_E89C2B8E3313D783_OFFSET))(this);
	}

	::System::Void B3709A8BA4A7CD8B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B16DDE53DBD91C27_B3709A8BA4A7CD8B_OFFSET))(this);
	}
};

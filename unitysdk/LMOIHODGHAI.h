#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDIFHHEMPHF.h"

#define LMOIHODGHAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1637C450)

inline static constexpr unsigned int LMOIHODGHAI_TypeDefinitionIndex = 44510;

class LMOIHODGHAI : public ::JDIFHHEMPHF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOIHODGHAI__CTOR_OFFSET))(this);
	}
};

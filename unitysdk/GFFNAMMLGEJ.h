#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBDGKAJPALP.h"

#define GFFNAMMLGEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1F954FD0)

inline static constexpr unsigned int GFFNAMMLGEJ_TypeDefinitionIndex = 95025;

class GFFNAMMLGEJ : public ::KBDGKAJPALP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFNAMMLGEJ__CTOR_OFFSET))(this);
	}
};

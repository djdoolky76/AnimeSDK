#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFKOHPLNJEN.h"

#define MIGIAHECAGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1318F910)

inline static constexpr unsigned int MIGIAHECAGJ_TypeDefinitionIndex = 41773;

class MIGIAHECAGJ : public ::IFKOHPLNJEN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGIAHECAGJ__CTOR_OFFSET))(this);
	}
};

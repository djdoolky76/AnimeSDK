#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFDDLEHKGIK.h"

#define FPMKLOGIMBL__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7ADE0)

inline static constexpr unsigned int FPMKLOGIMBL_TypeDefinitionIndex = 56393;

class FPMKLOGIMBL : public ::LFDDLEHKGIK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMKLOGIMBL__CTOR_OFFSET))(this);
	}
};

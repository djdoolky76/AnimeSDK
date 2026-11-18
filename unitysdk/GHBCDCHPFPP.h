#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBKFEMNJBH.h"

#define GHBCDCHPFPP__CTOR_OFFSET UNITYSDK_OFFSET(0x149C40D0)

inline static constexpr unsigned int GHBCDCHPFPP_TypeDefinitionIndex = 87752;

class GHBCDCHPFPP : public ::FOBKFEMNJBH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBCDCHPFPP__CTOR_OFFSET))(this);
	}
};

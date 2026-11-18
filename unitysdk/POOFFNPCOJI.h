#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOJKGAJDONE.h"

#define POOFFNPCOJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9FB720)

inline static constexpr unsigned int POOFFNPCOJI_TypeDefinitionIndex = 66201;

class POOFFNPCOJI : public ::FOJKGAJDONE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOFFNPCOJI__CTOR_OFFSET))(this);
	}
};

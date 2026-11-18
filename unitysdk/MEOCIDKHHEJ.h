#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBIPJBLHLMG.h"

#define MEOCIDKHHEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13D20050)

inline static constexpr unsigned int MEOCIDKHHEJ_TypeDefinitionIndex = 52943;

class MEOCIDKHHEJ : public ::HBIPJBLHLMG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEOCIDKHHEJ__CTOR_OFFSET))(this);
	}
};

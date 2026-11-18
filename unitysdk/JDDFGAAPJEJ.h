#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define JDDFGAAPJEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16ACA7E0)

inline static constexpr unsigned int JDDFGAAPJEJ_TypeDefinitionIndex = 75811;

class JDDFGAAPJEJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFGAAPJEJ__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define JLIPALJKAIB__CTOR_OFFSET UNITYSDK_OFFSET(0x19460840)

inline static constexpr unsigned int JLIPALJKAIB_TypeDefinitionIndex = 43723;

class JLIPALJKAIB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIPALJKAIB__CTOR_OFFSET))(this);
	}
};

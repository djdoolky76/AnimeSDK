#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DNPDIFGNNFA__CTOR_OFFSET UNITYSDK_OFFSET(0x148BC460)

inline static constexpr unsigned int DNPDIFGNNFA_TypeDefinitionIndex = 59175;

class DNPDIFGNNFA : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPDIFGNNFA__CTOR_OFFSET))(this);
	}
};

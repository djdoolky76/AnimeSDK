#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define GINCKFILMIC__CTOR_OFFSET UNITYSDK_OFFSET(0x11DB18D0)

inline static constexpr unsigned int GINCKFILMIC_TypeDefinitionIndex = 75946;

class GINCKFILMIC : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GINCKFILMIC__CTOR_OFFSET))(this);
	}
};

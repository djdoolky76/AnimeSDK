#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DHODEEDNMKN__CTOR_OFFSET UNITYSDK_OFFSET(0x15A476E0)

inline static constexpr unsigned int DHODEEDNMKN_TypeDefinitionIndex = 49072;

class DHODEEDNMKN : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHODEEDNMKN__CTOR_OFFSET))(this);
	}
};

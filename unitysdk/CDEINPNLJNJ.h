#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CDEINPNLJNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x128D0AF0)

inline static constexpr unsigned int CDEINPNLJNJ_TypeDefinitionIndex = 87259;

class CDEINPNLJNJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEINPNLJNJ__CTOR_OFFSET))(this);
	}
};

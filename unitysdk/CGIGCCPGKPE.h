#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CGIGCCPGKPE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2A340)

inline static constexpr unsigned int CGIGCCPGKPE_TypeDefinitionIndex = 50916;

class CGIGCCPGKPE : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIGCCPGKPE__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define GPCOGMPJEPC__CTOR_OFFSET UNITYSDK_OFFSET(0x15B34AA0)

inline static constexpr unsigned int GPCOGMPJEPC_TypeDefinitionIndex = 84751;

class GPCOGMPJEPC : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCOGMPJEPC__CTOR_OFFSET))(this);
	}
};

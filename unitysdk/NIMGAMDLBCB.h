#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define NIMGAMDLBCB__CTOR_OFFSET UNITYSDK_OFFSET(0xE75EEB0)

inline static constexpr unsigned int NIMGAMDLBCB_TypeDefinitionIndex = 39690;

class NIMGAMDLBCB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMGAMDLBCB__CTOR_OFFSET))(this);
	}
};

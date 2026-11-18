#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DMOEEBHCKNB__CTOR_OFFSET UNITYSDK_OFFSET(0x13E5A250)

inline static constexpr unsigned int DMOEEBHCKNB_TypeDefinitionIndex = 47579;

class DMOEEBHCKNB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOEEBHCKNB__CTOR_OFFSET))(this);
	}
};

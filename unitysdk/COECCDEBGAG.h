#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define COECCDEBGAG__CTOR_OFFSET UNITYSDK_OFFSET(0x13275970)

inline static constexpr unsigned int COECCDEBGAG_TypeDefinitionIndex = 76002;

class COECCDEBGAG : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COECCDEBGAG__CTOR_OFFSET))(this);
	}
};

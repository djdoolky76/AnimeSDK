#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define LFOPEPLPHLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A606890)

inline static constexpr unsigned int LFOPEPLPHLL_TypeDefinitionIndex = 56169;

class LFOPEPLPHLL : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOPEPLPHLL__CTOR_OFFSET))(this);
	}
};

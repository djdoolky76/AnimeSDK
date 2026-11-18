#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KENIMFJMGOF__CTOR_OFFSET UNITYSDK_OFFSET(0x19947640)

inline static constexpr unsigned int KENIMFJMGOF_TypeDefinitionIndex = 60769;

class KENIMFJMGOF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIMFJMGOF__CTOR_OFFSET))(this);
	}
};

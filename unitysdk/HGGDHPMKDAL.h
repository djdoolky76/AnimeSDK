#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define HGGDHPMKDAL__CTOR_OFFSET UNITYSDK_OFFSET(0x17E472F0)

inline static constexpr unsigned int HGGDHPMKDAL_TypeDefinitionIndex = 43116;

class HGGDHPMKDAL : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGDHPMKDAL__CTOR_OFFSET))(this);
	}
};

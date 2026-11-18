#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define NDJMBHMCALO__CTOR_OFFSET UNITYSDK_OFFSET(0x13B5BE80)

inline static constexpr unsigned int NDJMBHMCALO_TypeDefinitionIndex = 47662;

class NDJMBHMCALO : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJMBHMCALO__CTOR_OFFSET))(this);
	}
};

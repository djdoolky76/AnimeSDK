#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define GKCJAKMGGJF__CTOR_OFFSET UNITYSDK_OFFSET(0x15B20610)

inline static constexpr unsigned int GKCJAKMGGJF_TypeDefinitionIndex = 47633;

class GKCJAKMGGJF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCJAKMGGJF__CTOR_OFFSET))(this);
	}
};

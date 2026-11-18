#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define GMKJOKHHPKF__CTOR_OFFSET UNITYSDK_OFFSET(0x1815B9F0)

inline static constexpr unsigned int GMKJOKHHPKF_TypeDefinitionIndex = 58307;

class GMKJOKHHPKF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMKJOKHHPKF__CTOR_OFFSET))(this);
	}
};

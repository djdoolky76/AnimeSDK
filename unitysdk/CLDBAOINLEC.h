#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLDBAOINLEC__CTOR_OFFSET UNITYSDK_OFFSET(0x19715710)

inline static constexpr unsigned int CLDBAOINLEC_TypeDefinitionIndex = 44287;

class CLDBAOINLEC : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDBAOINLEC__CTOR_OFFSET))(this);
	}
};

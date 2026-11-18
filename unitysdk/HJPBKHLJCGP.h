#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define HJPBKHLJCGP__CTOR_OFFSET UNITYSDK_OFFSET(0x18195240)

inline static constexpr unsigned int HJPBKHLJCGP_TypeDefinitionIndex = 62634;

class HJPBKHLJCGP : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPBKHLJCGP__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define PIDKMIIJCCC__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9DE60)

inline static constexpr unsigned int PIDKMIIJCCC_TypeDefinitionIndex = 44508;

class PIDKMIIJCCC : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDKMIIJCCC__CTOR_OFFSET))(this);
	}
};

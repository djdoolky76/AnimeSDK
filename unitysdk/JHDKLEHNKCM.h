#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define JHDKLEHNKCM__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD05A0)

inline static constexpr unsigned int JHDKLEHNKCM_TypeDefinitionIndex = 56817;

class JHDKLEHNKCM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDKLEHNKCM__CTOR_OFFSET))(this);
	}
};

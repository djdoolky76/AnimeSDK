#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define JHOHMCMLOBO__CTOR_OFFSET UNITYSDK_OFFSET(0x165AC750)

inline static constexpr unsigned int JHOHMCMLOBO_TypeDefinitionIndex = 87532;

class JHOHMCMLOBO : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOHMCMLOBO__CTOR_OFFSET))(this);
	}
};

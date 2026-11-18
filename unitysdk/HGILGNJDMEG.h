#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define HGILGNJDMEG__CTOR_OFFSET UNITYSDK_OFFSET(0x17A45BE0)

inline static constexpr unsigned int HGILGNJDMEG_TypeDefinitionIndex = 65773;

class HGILGNJDMEG : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGILGNJDMEG__CTOR_OFFSET))(this);
	}
};

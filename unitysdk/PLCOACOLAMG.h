#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define PLCOACOLAMG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9EFDE0)

inline static constexpr unsigned int PLCOACOLAMG_TypeDefinitionIndex = 64447;

class PLCOACOLAMG : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCOACOLAMG__CTOR_OFFSET))(this);
	}
};

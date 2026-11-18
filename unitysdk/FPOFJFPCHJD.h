#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define FPOFJFPCHJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1323F390)

inline static constexpr unsigned int FPOFJFPCHJD_TypeDefinitionIndex = 40763;

class FPOFJFPCHJD : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOFJFPCHJD__CTOR_OFFSET))(this);
	}
};

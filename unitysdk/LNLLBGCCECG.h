#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define LNLLBGCCECG__CTOR_OFFSET UNITYSDK_OFFSET(0x15901E80)

inline static constexpr unsigned int LNLLBGCCECG_TypeDefinitionIndex = 80392;

class LNLLBGCCECG : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLLBGCCECG__CTOR_OFFSET))(this);
	}
};

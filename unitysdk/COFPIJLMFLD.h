#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define COFPIJLMFLD__CTOR_OFFSET UNITYSDK_OFFSET(0x12B8E0A0)

inline static constexpr unsigned int COFPIJLMFLD_TypeDefinitionIndex = 45084;

class COFPIJLMFLD : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFPIJLMFLD__CTOR_OFFSET))(this);
	}
};

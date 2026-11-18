#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define AAHCNLLAEBM__CTOR_OFFSET UNITYSDK_OFFSET(0x154C1AE0)

inline static constexpr unsigned int AAHCNLLAEBM_TypeDefinitionIndex = 72305;

class AAHCNLLAEBM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHCNLLAEBM__CTOR_OFFSET))(this);
	}
};

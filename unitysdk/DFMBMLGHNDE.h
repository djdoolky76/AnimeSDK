#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DFMBMLGHNDE__CTOR_OFFSET UNITYSDK_OFFSET(0x13293290)

inline static constexpr unsigned int DFMBMLGHNDE_TypeDefinitionIndex = 45812;

class DFMBMLGHNDE : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMBMLGHNDE__CTOR_OFFSET))(this);
	}
};

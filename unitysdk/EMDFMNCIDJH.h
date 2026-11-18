#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EMDFMNCIDJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1417C7E0)

inline static constexpr unsigned int EMDFMNCIDJH_TypeDefinitionIndex = 39116;

class EMDFMNCIDJH : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDFMNCIDJH__CTOR_OFFSET))(this);
	}
};

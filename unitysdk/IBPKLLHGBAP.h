#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define IBPKLLHGBAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1539E450)

inline static constexpr unsigned int IBPKLLHGBAP_TypeDefinitionIndex = 57261;

class IBPKLLHGBAP : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPKLLHGBAP__CTOR_OFFSET))(this);
	}
};

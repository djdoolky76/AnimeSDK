#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define NMKBBJPEPNO__CTOR_OFFSET UNITYSDK_OFFSET(0x1729D440)

inline static constexpr unsigned int NMKBBJPEPNO_TypeDefinitionIndex = 88398;

class NMKBBJPEPNO : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKBBJPEPNO__CTOR_OFFSET))(this);
	}
};

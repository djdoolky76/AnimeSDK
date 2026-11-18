#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MNBKFLLNCBC__CTOR_OFFSET UNITYSDK_OFFSET(0x131A63B0)

inline static constexpr unsigned int MNBKFLLNCBC_TypeDefinitionIndex = 64811;

class MNBKFLLNCBC : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBKFLLNCBC__CTOR_OFFSET))(this);
	}
};

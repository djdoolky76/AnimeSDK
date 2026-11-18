#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define OOLDIPLHPJG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC5CE0)

inline static constexpr unsigned int OOLDIPLHPJG_TypeDefinitionIndex = 63495;

class OOLDIPLHPJG : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOLDIPLHPJG__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define ODGJOEEJLIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1005DBC0)

inline static constexpr unsigned int ODGJOEEJLIC_TypeDefinitionIndex = 71476;

class ODGJOEEJLIC : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJOEEJLIC__CTOR_OFFSET))(this);
	}
};

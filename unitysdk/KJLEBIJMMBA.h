#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KJLEBIJMMBA__CTOR_OFFSET UNITYSDK_OFFSET(0xD3FD710)

inline static constexpr unsigned int KJLEBIJMMBA_TypeDefinitionIndex = 86615;

class KJLEBIJMMBA : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLEBIJMMBA__CTOR_OFFSET))(this);
	}
};

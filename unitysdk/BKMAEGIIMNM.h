#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define BKMAEGIIMNM__CTOR_OFFSET UNITYSDK_OFFSET(0x115168C0)

inline static constexpr unsigned int BKMAEGIIMNM_TypeDefinitionIndex = 65476;

class BKMAEGIIMNM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMAEGIIMNM__CTOR_OFFSET))(this);
	}
};

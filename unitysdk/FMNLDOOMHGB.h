#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define FMNLDOOMHGB__CTOR_OFFSET UNITYSDK_OFFSET(0x10EC27F0)

inline static constexpr unsigned int FMNLDOOMHGB_TypeDefinitionIndex = 66786;

class FMNLDOOMHGB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNLDOOMHGB__CTOR_OFFSET))(this);
	}
};

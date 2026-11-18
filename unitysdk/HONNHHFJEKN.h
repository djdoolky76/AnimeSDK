#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define HONNHHFJEKN__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE4060)

inline static constexpr unsigned int HONNHHFJEKN_TypeDefinitionIndex = 53945;

class HONNHHFJEKN : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HONNHHFJEKN__CTOR_OFFSET))(this);
	}
};

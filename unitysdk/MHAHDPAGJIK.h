#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MHAHDPAGJIK__CTOR_OFFSET UNITYSDK_OFFSET(0x12D85240)

inline static constexpr unsigned int MHAHDPAGJIK_TypeDefinitionIndex = 77513;

class MHAHDPAGJIK : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAHDPAGJIK__CTOR_OFFSET))(this);
	}
};

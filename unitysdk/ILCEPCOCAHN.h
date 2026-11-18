#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define ILCEPCOCAHN__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA7000)

inline static constexpr unsigned int ILCEPCOCAHN_TypeDefinitionIndex = 71198;

class ILCEPCOCAHN : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCEPCOCAHN__CTOR_OFFSET))(this);
	}
};

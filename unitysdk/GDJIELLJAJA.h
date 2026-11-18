#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define GDJIELLJAJA__CTOR_OFFSET UNITYSDK_OFFSET(0x165ECA30)

inline static constexpr unsigned int GDJIELLJAJA_TypeDefinitionIndex = 40294;

class GDJIELLJAJA : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJIELLJAJA__CTOR_OFFSET))(this);
	}
};

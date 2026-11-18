#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define PDFFICIJKEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1195D4F0)

inline static constexpr unsigned int PDFFICIJKEI_TypeDefinitionIndex = 89198;

class PDFFICIJKEI : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFFICIJKEI__CTOR_OFFSET))(this);
	}
};

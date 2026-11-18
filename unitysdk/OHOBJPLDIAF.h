#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define OHOBJPLDIAF__CTOR_OFFSET UNITYSDK_OFFSET(0xFB8F310)

inline static constexpr unsigned int OHOBJPLDIAF_TypeDefinitionIndex = 55033;

class OHOBJPLDIAF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOBJPLDIAF__CTOR_OFFSET))(this);
	}
};

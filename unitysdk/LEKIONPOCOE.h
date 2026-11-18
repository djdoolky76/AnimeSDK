#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define LEKIONPOCOE__CTOR_OFFSET UNITYSDK_OFFSET(0x152472C0)

inline static constexpr unsigned int LEKIONPOCOE_TypeDefinitionIndex = 77120;

class LEKIONPOCOE : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKIONPOCOE__CTOR_OFFSET))(this);
	}
};

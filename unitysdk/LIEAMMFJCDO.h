#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define LIEAMMFJCDO__CTOR_OFFSET UNITYSDK_OFFSET(0x15252F70)

inline static constexpr unsigned int LIEAMMFJCDO_TypeDefinitionIndex = 80836;

class LIEAMMFJCDO : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIEAMMFJCDO__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define NEPMDPIBBJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1313F470)

inline static constexpr unsigned int NEPMDPIBBJI_TypeDefinitionIndex = 89504;

class NEPMDPIBBJI : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPMDPIBBJI__CTOR_OFFSET))(this);
	}
};

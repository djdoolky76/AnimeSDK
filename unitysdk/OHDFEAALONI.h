#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define OHDFEAALONI__CTOR_OFFSET UNITYSDK_OFFSET(0x14F76460)

inline static constexpr unsigned int OHDFEAALONI_TypeDefinitionIndex = 55206;

class OHDFEAALONI : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDFEAALONI__CTOR_OFFSET))(this);
	}
};

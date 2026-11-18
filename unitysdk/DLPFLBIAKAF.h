#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DLPFLBIAKAF__CTOR_OFFSET UNITYSDK_OFFSET(0x132A26A0)

inline static constexpr unsigned int DLPFLBIAKAF_TypeDefinitionIndex = 81579;

class DLPFLBIAKAF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPFLBIAKAF__CTOR_OFFSET))(this);
	}
};

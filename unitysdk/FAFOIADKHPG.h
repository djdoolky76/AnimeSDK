#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define FAFOIADKHPG__CTOR_OFFSET UNITYSDK_OFFSET(0x12380C30)

inline static constexpr unsigned int FAFOIADKHPG_TypeDefinitionIndex = 60202;

class FAFOIADKHPG : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFOIADKHPG__CTOR_OFFSET))(this);
	}
};

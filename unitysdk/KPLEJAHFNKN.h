#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KPLEJAHFNKN__CTOR_OFFSET UNITYSDK_OFFSET(0x1792C690)

inline static constexpr unsigned int KPLEJAHFNKN_TypeDefinitionIndex = 57004;

class KPLEJAHFNKN : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLEJAHFNKN__CTOR_OFFSET))(this);
	}
};

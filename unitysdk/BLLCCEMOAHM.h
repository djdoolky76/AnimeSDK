#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define BLLCCEMOAHM__CTOR_OFFSET UNITYSDK_OFFSET(0x15082690)

inline static constexpr unsigned int BLLCCEMOAHM_TypeDefinitionIndex = 48730;

class BLLCCEMOAHM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLCCEMOAHM__CTOR_OFFSET))(this);
	}
};

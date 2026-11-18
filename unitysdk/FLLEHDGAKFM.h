#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define FLLEHDGAKFM__CTOR_OFFSET UNITYSDK_OFFSET(0x156C5570)

inline static constexpr unsigned int FLLEHDGAKFM_TypeDefinitionIndex = 91514;

class FLLEHDGAKFM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLEHDGAKFM__CTOR_OFFSET))(this);
	}
};

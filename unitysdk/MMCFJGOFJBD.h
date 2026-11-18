#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MMCFJGOFJBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1319F6C0)

inline static constexpr unsigned int MMCFJGOFJBD_TypeDefinitionIndex = 63724;

class MMCFJGOFJBD : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCFJGOFJBD__CTOR_OFFSET))(this);
	}
};

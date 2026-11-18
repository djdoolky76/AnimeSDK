#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define OOIDIGGCMAA__CTOR_OFFSET UNITYSDK_OFFSET(0x178A3E30)

inline static constexpr unsigned int OOIDIGGCMAA_TypeDefinitionIndex = 82238;

class OOIDIGGCMAA : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIDIGGCMAA__CTOR_OFFSET))(this);
	}
};

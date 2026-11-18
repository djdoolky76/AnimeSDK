#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define HBBLNKOIDEG__CTOR_OFFSET UNITYSDK_OFFSET(0x13D7E750)

inline static constexpr unsigned int HBBLNKOIDEG_TypeDefinitionIndex = 93116;

class HBBLNKOIDEG : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBLNKOIDEG__CTOR_OFFSET))(this);
	}
};

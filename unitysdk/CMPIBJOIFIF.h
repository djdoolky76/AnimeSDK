#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CMPIBJOIFIF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BDA90)

inline static constexpr unsigned int CMPIBJOIFIF_TypeDefinitionIndex = 59943;

class CMPIBJOIFIF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPIBJOIFIF__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define HJEDPLGCAKB__CTOR_OFFSET UNITYSDK_OFFSET(0x10113B80)

inline static constexpr unsigned int HJEDPLGCAKB_TypeDefinitionIndex = 83508;

class HJEDPLGCAKB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEDPLGCAKB__CTOR_OFFSET))(this);
	}
};

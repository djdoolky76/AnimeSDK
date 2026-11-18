#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLELDMHNIIP__CTOR_OFFSET UNITYSDK_OFFSET(0x14971020)

inline static constexpr unsigned int CLELDMHNIIP_TypeDefinitionIndex = 63806;

class CLELDMHNIIP : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLELDMHNIIP__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define PGMFFHFALNH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D3C20)

inline static constexpr unsigned int PGMFFHFALNH_TypeDefinitionIndex = 90918;

class PGMFFHFALNH : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMFFHFALNH__CTOR_OFFSET))(this);
	}
};

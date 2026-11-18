#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define NOPCFLDGNPP__CTOR_OFFSET UNITYSDK_OFFSET(0x105D1F40)

inline static constexpr unsigned int NOPCFLDGNPP_TypeDefinitionIndex = 90476;

class NOPCFLDGNPP : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCFLDGNPP__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define AKGCJCPEFPB__CTOR_OFFSET UNITYSDK_OFFSET(0x144E5730)

inline static constexpr unsigned int AKGCJCPEFPB_TypeDefinitionIndex = 82483;

class AKGCJCPEFPB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGCJCPEFPB__CTOR_OFFSET))(this);
	}
};

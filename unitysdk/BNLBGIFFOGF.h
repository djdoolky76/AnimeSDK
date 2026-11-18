#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define BNLBGIFFOGF__CTOR_OFFSET UNITYSDK_OFFSET(0x139858B0)

inline static constexpr unsigned int BNLBGIFFOGF_TypeDefinitionIndex = 62412;

class BNLBGIFFOGF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLBGIFFOGF__CTOR_OFFSET))(this);
	}
};

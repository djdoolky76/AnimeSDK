#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define FNPFNLMOICJ__CTOR_OFFSET UNITYSDK_OFFSET(0x116C3660)

inline static constexpr unsigned int FNPFNLMOICJ_TypeDefinitionIndex = 64040;

class FNPFNLMOICJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPFNLMOICJ__CTOR_OFFSET))(this);
	}
};

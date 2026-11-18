#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MFKKAGKBEOE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1FA90)

inline static constexpr unsigned int MFKKAGKBEOE_TypeDefinitionIndex = 60892;

class MFKKAGKBEOE : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKKAGKBEOE__CTOR_OFFSET))(this);
	}
};

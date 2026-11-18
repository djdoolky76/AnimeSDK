#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define OCAOIMPFJGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1842DF90)

inline static constexpr unsigned int OCAOIMPFJGN_TypeDefinitionIndex = 77498;

class OCAOIMPFJGN : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAOIMPFJGN__CTOR_OFFSET))(this);
	}
};

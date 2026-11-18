#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EMDKIALKPKL__CTOR_OFFSET UNITYSDK_OFFSET(0x13550AC0)

inline static constexpr unsigned int EMDKIALKPKL_TypeDefinitionIndex = 86252;

class EMDKIALKPKL : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDKIALKPKL__CTOR_OFFSET))(this);
	}
};

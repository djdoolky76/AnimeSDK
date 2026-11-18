#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define GIIGAMCOICC__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE2250)

inline static constexpr unsigned int GIIGAMCOICC_TypeDefinitionIndex = 82840;

class GIIGAMCOICC : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIGAMCOICC__CTOR_OFFSET))(this);
	}
};

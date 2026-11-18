#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MGILDNHJOHL__CTOR_OFFSET UNITYSDK_OFFSET(0x10744060)

inline static constexpr unsigned int MGILDNHJOHL_TypeDefinitionIndex = 39039;

class MGILDNHJOHL : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGILDNHJOHL__CTOR_OFFSET))(this);
	}
};

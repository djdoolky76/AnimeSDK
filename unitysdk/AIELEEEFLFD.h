#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define AIELEEEFLFD__CTOR_OFFSET UNITYSDK_OFFSET(0x135E8990)

inline static constexpr unsigned int AIELEEEFLFD_TypeDefinitionIndex = 40161;

class AIELEEEFLFD : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIELEEEFLFD__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define NJLINFJELAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1289A2C0)

inline static constexpr unsigned int NJLINFJELAE_TypeDefinitionIndex = 80232;

class NJLINFJELAE : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLINFJELAE__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CNKOMHOAMBI__CTOR_OFFSET UNITYSDK_OFFSET(0x145DA110)

inline static constexpr unsigned int CNKOMHOAMBI_TypeDefinitionIndex = 41169;

class CNKOMHOAMBI : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNKOMHOAMBI__CTOR_OFFSET))(this);
	}
};

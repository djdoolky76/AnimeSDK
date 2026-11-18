#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define GGNBFBNGCNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13D4A720)

inline static constexpr unsigned int GGNBFBNGCNJ_TypeDefinitionIndex = 87807;

class GGNBFBNGCNJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNBFBNGCNJ__CTOR_OFFSET))(this);
	}
};

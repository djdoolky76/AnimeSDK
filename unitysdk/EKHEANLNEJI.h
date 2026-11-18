#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EKHEANLNEJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1711B890)

inline static constexpr unsigned int EKHEANLNEJI_TypeDefinitionIndex = 50839;

class EKHEANLNEJI : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHEANLNEJI__CTOR_OFFSET))(this);
	}
};

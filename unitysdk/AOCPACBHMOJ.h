#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define AOCPACBHMOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCB480)

inline static constexpr unsigned int AOCPACBHMOJ_TypeDefinitionIndex = 74788;

class AOCPACBHMOJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOCPACBHMOJ__CTOR_OFFSET))(this);
	}
};

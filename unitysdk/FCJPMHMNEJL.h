#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define FCJPMHMNEJL__CTOR_OFFSET UNITYSDK_OFFSET(0x14287730)

inline static constexpr unsigned int FCJPMHMNEJL_TypeDefinitionIndex = 83999;

class FCJPMHMNEJL : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCJPMHMNEJL__CTOR_OFFSET))(this);
	}
};

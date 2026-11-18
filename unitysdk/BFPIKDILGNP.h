#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define BFPIKDILGNP__CTOR_OFFSET UNITYSDK_OFFSET(0x11502C90)

inline static constexpr unsigned int BFPIKDILGNP_TypeDefinitionIndex = 43376;

class BFPIKDILGNP : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPIKDILGNP__CTOR_OFFSET))(this);
	}
};

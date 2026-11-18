#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DNJFFBMFKNF__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD47B0)

inline static constexpr unsigned int DNJFFBMFKNF_TypeDefinitionIndex = 76343;

class DNJFFBMFKNF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJFFBMFKNF__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define IIBCENJNHGA__CTOR_OFFSET UNITYSDK_OFFSET(0x10148820)

inline static constexpr unsigned int IIBCENJNHGA_TypeDefinitionIndex = 88179;

class IIBCENJNHGA : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBCENJNHGA__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MJONOCCCJME__CTOR_OFFSET UNITYSDK_OFFSET(0x16C92E20)

inline static constexpr unsigned int MJONOCCCJME_TypeDefinitionIndex = 44304;

class MJONOCCCJME : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJONOCCCJME__CTOR_OFFSET))(this);
	}
};

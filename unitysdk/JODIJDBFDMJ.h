#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define JODIJDBFDMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18753020)

inline static constexpr unsigned int JODIJDBFDMJ_TypeDefinitionIndex = 67040;

class JODIJDBFDMJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODIJDBFDMJ__CTOR_OFFSET))(this);
	}
};

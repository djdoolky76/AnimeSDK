#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define IEJOLGAGMLM__CTOR_OFFSET UNITYSDK_OFFSET(0x141C0FB0)

inline static constexpr unsigned int IEJOLGAGMLM_TypeDefinitionIndex = 54115;

class IEJOLGAGMLM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJOLGAGMLM__CTOR_OFFSET))(this);
	}
};

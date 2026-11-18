#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define NFOJABLBKFM__CTOR_OFFSET UNITYSDK_OFFSET(0xE195720)

inline static constexpr unsigned int NFOJABLBKFM_TypeDefinitionIndex = 65296;

class NFOJABLBKFM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOJABLBKFM__CTOR_OFFSET))(this);
	}
};

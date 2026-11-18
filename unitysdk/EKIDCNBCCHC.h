#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EKIDCNBCCHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1426C520)

inline static constexpr unsigned int EKIDCNBCCHC_TypeDefinitionIndex = 92804;

class EKIDCNBCCHC : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKIDCNBCCHC__CTOR_OFFSET))(this);
	}
};

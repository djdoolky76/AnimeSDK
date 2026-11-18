#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define LOMIBJPGELM__CTOR_OFFSET UNITYSDK_OFFSET(0x1403C230)

inline static constexpr unsigned int LOMIBJPGELM_TypeDefinitionIndex = 47404;

class LOMIBJPGELM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOMIBJPGELM__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define NBDANFFPCFM__CTOR_OFFSET UNITYSDK_OFFSET(0x105A9410)

inline static constexpr unsigned int NBDANFFPCFM_TypeDefinitionIndex = 78973;

class NBDANFFPCFM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDANFFPCFM__CTOR_OFFSET))(this);
	}
};

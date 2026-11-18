#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define OKEJOOMMDFH__CTOR_OFFSET UNITYSDK_OFFSET(0xE15E360)

inline static constexpr unsigned int OKEJOOMMDFH_TypeDefinitionIndex = 85903;

class OKEJOOMMDFH : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEJOOMMDFH__CTOR_OFFSET))(this);
	}
};

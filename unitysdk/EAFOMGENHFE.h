#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EAFOMGENHFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1721F300)

inline static constexpr unsigned int EAFOMGENHFE_TypeDefinitionIndex = 47408;

class EAFOMGENHFE : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFOMGENHFE__CTOR_OFFSET))(this);
	}
};

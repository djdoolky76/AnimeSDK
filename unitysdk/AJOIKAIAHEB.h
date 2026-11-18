#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define AJOIKAIAHEB__CTOR_OFFSET UNITYSDK_OFFSET(0x144E3C40)

inline static constexpr unsigned int AJOIKAIAHEB_TypeDefinitionIndex = 81327;

class AJOIKAIAHEB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOIKAIAHEB__CTOR_OFFSET))(this);
	}
};

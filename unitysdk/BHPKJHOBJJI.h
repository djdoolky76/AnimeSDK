#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define BHPKJHOBJJI__CTOR_OFFSET UNITYSDK_OFFSET(0xFF75400)

inline static constexpr unsigned int BHPKJHOBJJI_TypeDefinitionIndex = 61887;

class BHPKJHOBJJI : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPKJHOBJJI__CTOR_OFFSET))(this);
	}
};

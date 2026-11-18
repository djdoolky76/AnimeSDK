#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define GOMAEMPBFND__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADD090)

inline static constexpr unsigned int GOMAEMPBFND_TypeDefinitionIndex = 82150;

class GOMAEMPBFND : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMAEMPBFND__CTOR_OFFSET))(this);
	}
};

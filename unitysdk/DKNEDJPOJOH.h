#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DKNEDJPOJOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1241E7E0)

inline static constexpr unsigned int DKNEDJPOJOH_TypeDefinitionIndex = 68784;

class DKNEDJPOJOH : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNEDJPOJOH__CTOR_OFFSET))(this);
	}
};

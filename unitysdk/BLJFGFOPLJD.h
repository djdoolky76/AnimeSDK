#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define BLJFGFOPLJD__CTOR_OFFSET UNITYSDK_OFFSET(0x14C4E970)

inline static constexpr unsigned int BLJFGFOPLJD_TypeDefinitionIndex = 49692;

class BLJFGFOPLJD : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJFGFOPLJD__CTOR_OFFSET))(this);
	}
};

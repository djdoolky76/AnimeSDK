#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define ENGJJJBJDGG__CTOR_OFFSET UNITYSDK_OFFSET(0x14278CE0)

inline static constexpr unsigned int ENGJJJBJDGG_TypeDefinitionIndex = 90867;

class ENGJJJBJDGG : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGJJJBJDGG__CTOR_OFFSET))(this);
	}
};

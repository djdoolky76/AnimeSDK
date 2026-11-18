#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KNIBIJAJHJK__CTOR_OFFSET UNITYSDK_OFFSET(0x157FFDB0)

inline static constexpr unsigned int KNIBIJAJHJK_TypeDefinitionIndex = 40712;

class KNIBIJAJHJK : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBIJAJHJK__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define JAMAJFLNIAF__CTOR_OFFSET UNITYSDK_OFFSET(0x14A3F670)

inline static constexpr unsigned int JAMAJFLNIAF_TypeDefinitionIndex = 69888;

class JAMAJFLNIAF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMAJFLNIAF__CTOR_OFFSET))(this);
	}
};

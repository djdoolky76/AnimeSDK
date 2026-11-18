#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CKEGEAPJCLM__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDB6C0)

inline static constexpr unsigned int CKEGEAPJCLM_TypeDefinitionIndex = 56998;

class CKEGEAPJCLM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEGEAPJCLM__CTOR_OFFSET))(this);
	}
};

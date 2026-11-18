#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EKHMIPBPFEE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A98CB0)

inline static constexpr unsigned int EKHMIPBPFEE_TypeDefinitionIndex = 56579;

class EKHMIPBPFEE : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHMIPBPFEE__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EOFDGIBPKKI__CTOR_OFFSET UNITYSDK_OFFSET(0x171317D0)

inline static constexpr unsigned int EOFDGIBPKKI_TypeDefinitionIndex = 73969;

class EOFDGIBPKKI : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFDGIBPKKI__CTOR_OFFSET))(this);
	}
};

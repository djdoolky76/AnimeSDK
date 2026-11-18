#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define JONKFNHGHDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C373CD0)

inline static constexpr unsigned int JONKFNHGHDP_TypeDefinitionIndex = 58409;

class JONKFNHGHDP : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONKFNHGHDP__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DDOENLLBCDN__CTOR_OFFSET UNITYSDK_OFFSET(0x132905A0)

inline static constexpr unsigned int DDOENLLBCDN_TypeDefinitionIndex = 69969;

class DDOENLLBCDN : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOENLLBCDN__CTOR_OFFSET))(this);
	}
};

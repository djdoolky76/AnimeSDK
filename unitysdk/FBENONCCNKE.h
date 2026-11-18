#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define FBENONCCNKE__CTOR_OFFSET UNITYSDK_OFFSET(0x17261FB0)

inline static constexpr unsigned int FBENONCCNKE_TypeDefinitionIndex = 67003;

class FBENONCCNKE : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBENONCCNKE__CTOR_OFFSET))(this);
	}
};

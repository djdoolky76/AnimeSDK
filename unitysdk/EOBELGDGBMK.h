#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EOBELGDGBMK__CTOR_OFFSET UNITYSDK_OFFSET(0x10F49B40)

inline static constexpr unsigned int EOBELGDGBMK_TypeDefinitionIndex = 57232;

class EOBELGDGBMK : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBELGDGBMK__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define IHICDBKKBNM__CTOR_OFFSET UNITYSDK_OFFSET(0x141D86E0)

inline static constexpr unsigned int IHICDBKKBNM_TypeDefinitionIndex = 65642;

class IHICDBKKBNM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHICDBKKBNM__CTOR_OFFSET))(this);
	}
};

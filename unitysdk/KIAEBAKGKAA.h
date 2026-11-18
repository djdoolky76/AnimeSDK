#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KIAEBAKGKAA__CTOR_OFFSET UNITYSDK_OFFSET(0x157EE0B0)

inline static constexpr unsigned int KIAEBAKGKAA_TypeDefinitionIndex = 58708;

class KIAEBAKGKAA : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAEBAKGKAA__CTOR_OFFSET))(this);
	}
};

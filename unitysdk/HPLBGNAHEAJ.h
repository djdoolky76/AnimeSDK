#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define HPLBGNAHEAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1655A180)

inline static constexpr unsigned int HPLBGNAHEAJ_TypeDefinitionIndex = 47474;

class HPLBGNAHEAJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLBGNAHEAJ__CTOR_OFFSET))(this);
	}
};

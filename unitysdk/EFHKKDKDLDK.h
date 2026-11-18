#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EFHKKDKDLDK__CTOR_OFFSET UNITYSDK_OFFSET(0x154A6ED0)

inline static constexpr unsigned int EFHKKDKDLDK_TypeDefinitionIndex = 69641;

class EFHKKDKDLDK : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHKKDKDLDK__CTOR_OFFSET))(this);
	}
};

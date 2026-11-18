#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define HFHJHJGPIAC__CTOR_OFFSET UNITYSDK_OFFSET(0x15B476A0)

inline static constexpr unsigned int HFHJHJGPIAC_TypeDefinitionIndex = 60050;

class HFHJHJGPIAC : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHJHJGPIAC__CTOR_OFFSET))(this);
	}
};

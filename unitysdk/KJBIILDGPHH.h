#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KJBIILDGPHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1299D7E0)

inline static constexpr unsigned int KJBIILDGPHH_TypeDefinitionIndex = 75839;

class KJBIILDGPHH : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBIILDGPHH__CTOR_OFFSET))(this);
	}
};

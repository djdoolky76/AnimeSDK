#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define AODDBJDKLCK__CTOR_OFFSET UNITYSDK_OFFSET(0xF777E70)

inline static constexpr unsigned int AODDBJDKLCK_TypeDefinitionIndex = 45215;

class AODDBJDKLCK : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODDBJDKLCK__CTOR_OFFSET))(this);
	}
};

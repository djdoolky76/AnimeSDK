#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KBFCCMIKCJH__CTOR_OFFSET UNITYSDK_OFFSET(0x18609050)

inline static constexpr unsigned int KBFCCMIKCJH_TypeDefinitionIndex = 48184;

class KBFCCMIKCJH : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFCCMIKCJH__CTOR_OFFSET))(this);
	}
};

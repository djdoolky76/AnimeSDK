#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MMKGJJHOIBM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A69E5F0)

inline static constexpr unsigned int MMKGJJHOIBM_TypeDefinitionIndex = 49433;

class MMKGJJHOIBM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKGJJHOIBM__CTOR_OFFSET))(this);
	}
};

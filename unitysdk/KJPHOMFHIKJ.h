#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KJPHOMFHIKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x168170D0)

inline static constexpr unsigned int KJPHOMFHIKJ_TypeDefinitionIndex = 49273;

class KJPHOMFHIKJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPHOMFHIKJ__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLFPHJKHJFB__CTOR_OFFSET UNITYSDK_OFFSET(0x145D1E50)

inline static constexpr unsigned int CLFPHJKHJFB_TypeDefinitionIndex = 68275;

class CLFPHJKHJFB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFPHJKHJFB__CTOR_OFFSET))(this);
	}
};

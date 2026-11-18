#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define LANBBNJNKGB__CTOR_OFFSET UNITYSDK_OFFSET(0x1517B240)

inline static constexpr unsigned int LANBBNJNKGB_TypeDefinitionIndex = 68505;

class LANBBNJNKGB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LANBBNJNKGB__CTOR_OFFSET))(this);
	}
};

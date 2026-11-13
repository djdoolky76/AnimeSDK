#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_PropScreenSpaceGPUParticleBehavior.h"

#define MIOMHBKBMOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A39BC30)
#define MIOMHBKBMOE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1A39B8E0)

inline static constexpr unsigned int MIOMHBKBMOE_TypeDefinitionIndex = 72447;

	class MIOMHBKBMOE : public ::RPG::Client::Effect_PropScreenSpaceGPUParticleBehavior
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIOMHBKBMOE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIOMHBKBMOE_KPJGDHLENIP_OFFSET))(this);
		}

	};

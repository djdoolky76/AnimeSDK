#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightParticleEffect.h"

#define RPG_CLIENT_GRIDFIGHTUPGRADEREFRESHEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDCFC190)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUpgradeRefreshEffect_TypeDefinitionIndex = 66034;

	class GridFightUpgradeRefreshEffect : public ::RPG::Client::GridFightParticleEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEREFRESHEFFECT_CTOR_OFFSET))(this);
		}

	};
}

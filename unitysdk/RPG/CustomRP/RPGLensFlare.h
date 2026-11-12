#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

#define RPG_CUSTOMRP_RPGLENSFLARE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFF160)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGLensFlare_TypeDefinitionIndex = 38749;

	class RPGLensFlare : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSFLARE_CTOR_OFFSET))(this);
		}

	};
}

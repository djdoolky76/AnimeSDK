#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SpaceEffectBaseConfig.h"

class JBGKCOPNHBE;

#define MOLEMOLE_CONFIG_VIRTUALSPACECUBEEFFECTCONFIG_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x118E7A60)
#define MOLEMOLE_CONFIG_VIRTUALSPACECUBEEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x118E7B40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int VirtualSpaceCubeEffectConfig_TypeDefinitionIndex = 65560;

	class VirtualSpaceCubeEffectConfig : public ::MoleMole::Config::SpaceEffectBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VIRTUALSPACECUBEEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		::JBGKCOPNHBE* CreateInstance()
		{
			return ((::JBGKCOPNHBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VIRTUALSPACECUBEEFFECTCONFIG_CREATEINSTANCE_OFFSET))(this);
		}
	};
}

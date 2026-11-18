#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPlayLightDiffusionAnimation_DiffusionType.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGPLAYLIGHTDIFFUSIONANIMATION_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1BA39AF0)
#define MOLEMOLE_CONFIG_CONFIGPLAYLIGHTDIFFUSIONANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA39BB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayLightDiffusionAnimation_TypeDefinitionIndex = 92405;

	class ConfigPlayLightDiffusionAnimation : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean UsePlayerPos; // 0x18
		::System::Byte _padding0[0x3];
		::MoleMole::Vector2Int StartPos; // 0x1C
		::MoleMole::Config::ConfigPlayLightDiffusionAnimation_DiffusionType Diffusion; // 0x24
		::System::Single DiffusionDuration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYLIGHTDIFFUSIONANIMATION__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYLIGHTDIFFUSIONANIMATION_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPlayInnerWorldDiffusionAnimation_DiffusionType.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGPLAYINNERWORLDDIFFUSIONANIMATION_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFFE1CA0)
#define MOLEMOLE_CONFIG_CONFIGPLAYINNERWORLDDIFFUSIONANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE1D60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayInnerWorldDiffusionAnimation_TypeDefinitionIndex = 66936;

	class ConfigPlayInnerWorldDiffusionAnimation : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ConfigPlayInnerWorldDiffusionAnimation_DiffusionType Diffusion; // 0x18
		::System::Boolean UsePlayerPos; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single DiffusionDuration; // 0x20
		::MoleMole::Vector2Int StartPos; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYINNERWORLDDIFFUSIONANIMATION__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYINNERWORLDDIFFUSIONANIMATION_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOCJCKKLNJL.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGSETVOLUMENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16418FD0)
#define MOLEMOLE_CONFIG_CONFIGSETVOLUMENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16419090)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetVolumeNode_TypeDefinitionIndex = 71054;

	class ConfigSetVolumeNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::EOCJCKKLNJL VolumeType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETVOLUMENODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETVOLUMENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

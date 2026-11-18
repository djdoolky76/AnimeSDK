#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AtmosphereSourceType.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSETATMOSPHERENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1653DCD0)
#define MOLEMOLE_CONFIG_CONFIGSETATMOSPHERENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1653DD90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetAtmosphereNode_TypeDefinitionIndex = 56348;

	class ConfigSetAtmosphereNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* TargetAtmosphere; // 0x18
		::MoleMole::Config::AtmosphereSourceType AtmosphereType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETATMOSPHERENODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETATMOSPHERENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSTARTLIGHTUPNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x192970E0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSTARTLIGHTUPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x192971A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardStartLightUpNode_TypeDefinitionIndex = 61133;

	class ConfigChessboardStartLightUpNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDSTARTLIGHTUPNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDSTARTLIGHTUPNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

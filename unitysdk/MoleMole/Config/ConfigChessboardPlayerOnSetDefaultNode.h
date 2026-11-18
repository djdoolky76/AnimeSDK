#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYERONSETDEFAULTNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x18B91C20)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYERONSETDEFAULTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B91CE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardPlayerOnSetDefaultNode_TypeDefinitionIndex = 63677;

	class ConfigChessboardPlayerOnSetDefaultNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYERONSETDEFAULTNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYERONSETDEFAULTNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

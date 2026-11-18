#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigChessboardTriggerEventNode_EventType.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGEREVENTNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B9144F0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGEREVENTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9145B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardTriggerEventNode_TypeDefinitionIndex = 53253;

	class ConfigChessboardTriggerEventNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Int32 EventID; // 0x18
		::MoleMole::Config::ConfigChessboardTriggerEventNode_EventType ChessboardEventType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGEREVENTNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGEREVENTNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

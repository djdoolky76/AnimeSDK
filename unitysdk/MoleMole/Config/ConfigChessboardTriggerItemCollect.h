#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGERITEMCOLLECT_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x131DF770)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGERITEMCOLLECT__CTOR_OFFSET UNITYSDK_OFFSET(0x131DF830)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardTriggerItemCollect_TypeDefinitionIndex = 57592;

	class ConfigChessboardTriggerItemCollect : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean NeedBlock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGERITEMCOLLECT__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDTRIGGERITEMCOLLECT_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

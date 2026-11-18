#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGSTOPSEQUENCEVENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x190A7FC0)
#define MOLEMOLE_CONFIG_CONFIGSTOPSEQUENCEVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x190A8080)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigStopSequenceVENode_TypeDefinitionIndex = 81624;

	class ConfigStopSequenceVENode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean isBG; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTOPSEQUENCEVENODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTOPSEQUENCEVENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

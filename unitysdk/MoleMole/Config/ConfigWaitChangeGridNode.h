#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGWAITCHANGEGRIDNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A76CAF0)
#define MOLEMOLE_CONFIG_CONFIGWAITCHANGEGRIDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76CBB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWaitChangeGridNode_TypeDefinitionIndex = 70552;

	class ConfigWaitChangeGridNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAITCHANGEGRIDNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAITCHANGEGRIDNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

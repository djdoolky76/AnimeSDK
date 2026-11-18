#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseFlowNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGPARALLELANDFLOWNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x19B1BD60)
#define MOLEMOLE_CONFIG_CONFIGPARALLELANDFLOWNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1BE50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigParallelAndFlowNode_TypeDefinitionIndex = 40922;

	class ConfigParallelAndFlowNode : public ::MoleMole::Config::ConfigUIBaseFlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARALLELANDFLOWNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARALLELANDFLOWNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

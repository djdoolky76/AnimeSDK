#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseFlowNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGSEQUENCEFLOWNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x12782FE0)
#define MOLEMOLE_CONFIG_CONFIGSEQUENCEFLOWNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x127830D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSequenceFlowNode_TypeDefinitionIndex = 49007;

	class ConfigSequenceFlowNode : public ::MoleMole::Config::ConfigUIBaseFlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSEQUENCEFLOWNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSEQUENCEFLOWNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

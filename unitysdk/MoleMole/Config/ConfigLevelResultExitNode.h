#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTEXITNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x131E75B0)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTEXITNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x131E7620)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultExitNode_TypeDefinitionIndex = 63121;

	class ConfigLevelResultExitNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTEXITNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTEXITNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseScriptableAnimationNode.h"

#define MOLEMOLE_CONFIG_CONFIGUIBASEACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A41B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIBaseActionNode_TypeDefinitionIndex = 82727;

	class ConfigUIBaseActionNode : public ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIBASEACTIONNODE__CTOR_OFFSET))(this);
		}
	};
}

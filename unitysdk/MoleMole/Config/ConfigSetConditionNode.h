#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSETCONDITIONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1653DDD0)
#define MOLEMOLE_CONFIG_CONFIGSETCONDITIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1653DE40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetConditionNode_TypeDefinitionIndex = 65342;

	class ConfigSetConditionNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* ConditionKey; // 0x18
		::System::Boolean ConditionValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETCONDITIONNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETCONDITIONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

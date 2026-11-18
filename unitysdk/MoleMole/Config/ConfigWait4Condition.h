#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGWAIT4CONDITION_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1BA454E0)
#define MOLEMOLE_CONFIG_CONFIGWAIT4CONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA45550)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWait4Condition_TypeDefinitionIndex = 52411;

	class ConfigWait4Condition : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* ConditionKey; // 0x18
		::System::Single MaxWaitTime; // 0x20
		::System::Boolean InstantPlayNext; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAIT4CONDITION__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAIT4CONDITION_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

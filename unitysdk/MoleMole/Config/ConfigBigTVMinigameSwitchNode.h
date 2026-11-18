#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGBIGTVMINIGAMESWITCHNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x19B13B00)
#define MOLEMOLE_CONFIG_CONFIGBIGTVMINIGAMESWITCHNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B13BC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBigTVMinigameSwitchNode_TypeDefinitionIndex = 81732;

	class ConfigBigTVMinigameSwitchNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean Open; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBIGTVMINIGAMESWITCHNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBIGTVMINIGAMESWITCHNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

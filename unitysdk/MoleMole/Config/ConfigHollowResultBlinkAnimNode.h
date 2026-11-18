#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTBLINKANIMNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16411D50)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTBLINKANIMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16411DC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowResultBlinkAnimNode_TypeDefinitionIndex = 61198;

	class ConfigHollowResultBlinkAnimNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Single DelayTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTBLINKANIMNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTBLINKANIMNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

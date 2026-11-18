#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGWAITINLEVELPOPNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A76CBF0)
#define MOLEMOLE_CONFIG_CONFIGWAITINLEVELPOPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76CC60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWaitInLevelPopNode_TypeDefinitionIndex = 53066;

	class ConfigWaitInLevelPopNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Single MaxSeconds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAITINLEVELPOPNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAITINLEVELPOPNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

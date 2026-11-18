#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWENABLEREFRESHPLAYERON_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFAC7230)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWENABLEREFRESHPLAYERON__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC72F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowEnableRefreshPlayerOn_TypeDefinitionIndex = 40542;

	class ConfigHollowEnableRefreshPlayerOn : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean EnableRefreshPlayerOn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWENABLEREFRESHPLAYERON__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWENABLEREFRESHPLAYERON_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

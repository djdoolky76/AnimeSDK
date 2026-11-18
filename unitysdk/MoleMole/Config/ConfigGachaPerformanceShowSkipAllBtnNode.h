#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESHOWSKIPALLBTNNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A02C680)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESHOWSKIPALLBTNNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A02C6F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceShowSkipAllBtnNode_TypeDefinitionIndex = 41885;

	class ConfigGachaPerformanceShowSkipAllBtnNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESHOWSKIPALLBTNNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESHOWSKIPALLBTNNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

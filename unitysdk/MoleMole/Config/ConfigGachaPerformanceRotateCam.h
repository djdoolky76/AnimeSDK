#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEROTATECAM_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x121BFF70)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEROTATECAM__CTOR_OFFSET UNITYSDK_OFFSET(0x121BFFE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceRotateCam_TypeDefinitionIndex = 88530;

	class ConfigGachaPerformanceRotateCam : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEROTATECAM__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEROTATECAM_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGCLOSEFULLSCENEVIDEO_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x18B91D20)
#define MOLEMOLE_CONFIG_CONFIGCLOSEFULLSCENEVIDEO__CTOR_OFFSET UNITYSDK_OFFSET(0x18B91DE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCloseFullSceneVideo_TypeDefinitionIndex = 74107;

	class ConfigCloseFullSceneVideo : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCLOSEFULLSCENEVIDEO__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCLOSEFULLSCENEVIDEO_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

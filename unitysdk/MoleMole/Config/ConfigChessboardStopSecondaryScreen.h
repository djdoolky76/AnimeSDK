#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSTOPSECONDARYSCREEN_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x131DF670)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSTOPSECONDARYSCREEN__CTOR_OFFSET UNITYSDK_OFFSET(0x131DF730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardStopSecondaryScreen_TypeDefinitionIndex = 65099;

	class ConfigChessboardStopSecondaryScreen : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDSTOPSECONDARYSCREEN__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDSTOPSECONDARYSCREEN_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

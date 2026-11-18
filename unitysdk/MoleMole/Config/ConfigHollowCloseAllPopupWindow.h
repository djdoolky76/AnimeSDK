#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCLOSEALLPOPUPWINDOW_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x121C1C00)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCLOSEALLPOPUPWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x121C1CC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCloseAllPopupWindow_TypeDefinitionIndex = 60272;

	class ConfigHollowCloseAllPopupWindow : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCLOSEALLPOPUPWINDOW__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCLOSEALLPOPUPWINDOW_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

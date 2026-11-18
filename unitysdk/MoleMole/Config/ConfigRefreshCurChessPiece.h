#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGREFRESHCURCHESSPIECE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x190A5280)
#define MOLEMOLE_CONFIG_CONFIGREFRESHCURCHESSPIECE__CTOR_OFFSET UNITYSDK_OFFSET(0x190A5340)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRefreshCurChessPiece_TypeDefinitionIndex = 55027;

	class ConfigRefreshCurChessPiece : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREFRESHCURCHESSPIECE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREFRESHCURCHESSPIECE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

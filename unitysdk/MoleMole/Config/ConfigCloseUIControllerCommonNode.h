#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGCLOSEUICONTROLLERCOMMONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x192971E0)
#define MOLEMOLE_CONFIG_CONFIGCLOSEUICONTROLLERCOMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19297250)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCloseUIControllerCommonNode_TypeDefinitionIndex = 72782;

	class ConfigCloseUIControllerCommonNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* UIControllerKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCLOSEUICONTROLLERCOMMONNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCLOSEUICONTROLLERCOMMONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

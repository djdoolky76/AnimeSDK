#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGREMOVENPCNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A768840)
#define MOLEMOLE_CONFIG_CONFIGREMOVENPCNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A768900)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRemoveNpcNode_TypeDefinitionIndex = 47466;

	class ConfigRemoveNpcNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* RemoveUIDKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREMOVENPCNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREMOVENPCNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

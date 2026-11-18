#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class ConfigSoundActionGeneral; }

#define MOLEMOLE_CONFIG_CONFIGUIACTIONSOUNDGENERALNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x11EA27E0)
#define MOLEMOLE_CONFIG_CONFIGUIACTIONSOUNDGENERALNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA2850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIActionSoundGeneralNode_TypeDefinitionIndex = 61916;

	class ConfigUIActionSoundGeneralNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIACTIONSOUNDGENERALNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIACTIONSOUNDGENERALNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

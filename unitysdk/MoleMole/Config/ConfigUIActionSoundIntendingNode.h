#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class ConfigSoundActionIntending; }

#define MOLEMOLE_CONFIG_CONFIGUIACTIONSOUNDINTENDINGNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFFE3D30)
#define MOLEMOLE_CONFIG_CONFIGUIACTIONSOUNDINTENDINGNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE3DA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIActionSoundIntendingNode_TypeDefinitionIndex = 54382;

	class ConfigUIActionSoundIntendingNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ConfigSoundActionIntending* action; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIACTIONSOUNDINTENDINGNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIACTIONSOUNDINTENDINGNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

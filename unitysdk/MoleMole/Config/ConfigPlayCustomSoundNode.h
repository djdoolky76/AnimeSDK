#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class IntUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGPLAYCUSTOMSOUNDNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x190A5010)
#define MOLEMOLE_CONFIG_CONFIGPLAYCUSTOMSOUNDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x190A5080)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayCustomSoundNode_TypeDefinitionIndex = 73423;

	class ConfigPlayCustomSoundNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::IntUISpecialNum* ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYCUSTOMSOUNDNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYCUSTOMSOUNDNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

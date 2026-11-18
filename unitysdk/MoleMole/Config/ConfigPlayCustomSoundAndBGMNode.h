#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class IntUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGPLAYCUSTOMSOUNDANDBGMNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFFE1BF0)
#define MOLEMOLE_CONFIG_CONFIGPLAYCUSTOMSOUNDANDBGMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE1C60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayCustomSoundAndBGMNode_TypeDefinitionIndex = 85247;

	class ConfigPlayCustomSoundAndBGMNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::IntUISpecialNum* ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYCUSTOMSOUNDANDBGMNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYCUSTOMSOUNDANDBGMNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

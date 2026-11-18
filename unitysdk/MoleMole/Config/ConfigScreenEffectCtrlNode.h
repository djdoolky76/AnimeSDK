#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigScreenEffectCtrlNode_ScreenEffectCtrlType.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSCREENEFFECTCTRLNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x12782F30)
#define MOLEMOLE_CONFIG_CONFIGSCREENEFFECTCTRLNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12782FA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigScreenEffectCtrlNode_TypeDefinitionIndex = 54441;

	class ConfigScreenEffectCtrlNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* PlayCondition; // 0x18
		::System::String* ScreenEffectKey; // 0x20
		::MoleMole::Config::ConfigScreenEffectCtrlNode_ScreenEffectCtrlType CtrlType; // 0x28
		::MoleMole::Config::ScreenEffectType ScreenEffectType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSCREENEFFECTCTRLNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSCREENEFFECTCTRLNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

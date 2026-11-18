#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"

class ADCIIHIOAMH;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDUIPOSTPROCESS_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B9145F0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDUIPOSTPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9146D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardUiPostProcess_TypeDefinitionIndex = 60337;

	class ConfigChessboardUiPostProcess : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* EffectKey; // 0x18
		::UnityEngine::AnimationCurve* Curve; // 0x20
		::System::String* uiAnimName; // 0x28
		::System::Single uiAnimDelay; // 0x30
		::System::Single BlackMaskDuration; // 0x34
		::System::Boolean BlackMaskEnable; // 0x38
		::System::Boolean uiAnimImmediate; // 0x39
		::System::Byte _padding0[0x2];
		::MoleMole::Config::ScreenEffectType EffectType; // 0x3C
		::System::Single Duration; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDUIPOSTPROCESS__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDUIPOSTPROCESS_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

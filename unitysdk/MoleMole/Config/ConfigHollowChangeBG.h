#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChangeBG_ChangeBGType.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEBG_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1BA2E280)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA2E340)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChangeBG_TypeDefinitionIndex = 79285;

	class ConfigHollowChangeBG : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* FadeInSpeed; // 0x18
		::UnityEngine::AnimationCurve* FadeOutSpeed; // 0x20
		::System::Single FadeOutDuration; // 0x28
		::System::Int32 PerformResID; // 0x2C
		::System::Single FadeInDuration; // 0x30
		::System::Single TargetOpacity; // 0x34
		::MoleMole::Config::ConfigHollowChangeBG_ChangeBGType ChangeType; // 0x38
		::System::Boolean needFadeOut; // 0x3C
		::System::Boolean needFadeIn; // 0x3D
		::System::Boolean CloseNoiseEffect; // 0x3E
		::System::Byte _padding0[0x1];
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x40
		::System::Single TargetBright; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEBG__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEBG_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

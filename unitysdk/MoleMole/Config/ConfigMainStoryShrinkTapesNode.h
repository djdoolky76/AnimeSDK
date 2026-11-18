#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGMAINSTORYSHRINKTAPESNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFAC7CE0)
#define MOLEMOLE_CONFIG_CONFIGMAINSTORYSHRINKTAPESNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC7D50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMainStoryShrinkTapesNode_TypeDefinitionIndex = 85229;

	class ConfigMainStoryShrinkTapesNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* Curve; // 0x18
		::System::Single DuraionOffset; // 0x20
		::System::Single Duration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINSTORYSHRINKTAPESNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINSTORYSHRINKTAPESNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

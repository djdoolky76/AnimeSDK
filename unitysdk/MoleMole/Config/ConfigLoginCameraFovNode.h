#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGLOGINCAMERAFOVNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A031280)
#define MOLEMOLE_CONFIG_CONFIGLOGINCAMERAFOVNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0312F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLoginCameraFovNode_TypeDefinitionIndex = 62822;

	class ConfigLoginCameraFovNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x18
		::System::Single fovTime; // 0x20
		::System::Single Fov; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGINCAMERAFOVNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGINCAMERAFOVNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

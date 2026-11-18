#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ADCIIHIOAMH;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGLOGINCAMERAROTATENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1BA2E900)
#define MOLEMOLE_CONFIG_CONFIGLOGINCAMERAROTATENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA2E970)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLoginCameraRotateNode_TypeDefinitionIndex = 50797;

	class ConfigLoginCameraRotateNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x18
		::UnityEngine::Vector3 targetRotation; // 0x20
		::System::Single rotateTime; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGINCAMERAROTATENODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGINCAMERAROTATENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

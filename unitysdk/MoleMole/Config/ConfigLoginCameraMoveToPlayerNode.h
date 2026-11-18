#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGLOGINCAMERAMOVETOPLAYERNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A765FF0)
#define MOLEMOLE_CONFIG_CONFIGLOGINCAMERAMOVETOPLAYERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A766060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLoginCameraMoveToPlayerNode_TypeDefinitionIndex = 59935;

	class ConfigLoginCameraMoveToPlayerNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* RotationCurve; // 0x18
		::UnityEngine::AnimationCurve* PositionCurve; // 0x20
		::UnityEngine::AnimationCurve* FovCurve; // 0x28
		::System::Single RotationTime; // 0x30
		::System::Single PositionMoveTime; // 0x34
		::System::Single FovTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGINCAMERAMOVETOPLAYERNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGINCAMERAMOVETOPLAYERNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

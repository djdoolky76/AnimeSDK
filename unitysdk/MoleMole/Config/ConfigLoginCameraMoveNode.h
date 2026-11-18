#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGLOGINCAMERAMOVENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x19241DB0)
#define MOLEMOLE_CONFIG_CONFIGLOGINCAMERAMOVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19241E20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLoginCameraMoveNode_TypeDefinitionIndex = 74383;

	class ConfigLoginCameraMoveNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x18
		::System::Single moveTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGINCAMERAMOVENODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGINCAMERAMOVENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDTIMESCALENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16408CC0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDTIMESCALENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16408D80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardTimeScaleNode_TypeDefinitionIndex = 78986;

	class ConfigChessboardTimeScaleNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* AnimCurve; // 0x18
		::System::Single TargetTimeScaleRatio; // 0x20
		::System::Single Duration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDTIMESCALENODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDTIMESCALENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class AnimationCurveUISpecialNum; }
namespace MoleMole::Config { class FloatUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERATELEPORTCENTERNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x121B75B0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERATELEPORTCENTERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x121B7670)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCameraTeleportCenterNode_TypeDefinitionIndex = 66501;

	class ConfigChessboardCameraTeleportCenterNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::FloatUISpecialNum* MoveToCenterDuration; // 0x18
		::MoleMole::Config::AnimationCurveUISpecialNum* MoveToCenterCurve; // 0x20
		::System::Boolean IgnoreIfTargetInFocusRange; // 0x28
		::System::Boolean UseCustomZ; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERATELEPORTCENTERNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERATELEPORTCENTERNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

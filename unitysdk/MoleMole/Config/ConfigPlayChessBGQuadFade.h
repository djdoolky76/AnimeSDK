#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGPLAYCHESSBGQUADFADE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1924A2D0)
#define MOLEMOLE_CONFIG_CONFIGPLAYCHESSBGQUADFADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1924A390)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayChessBGQuadFade_TypeDefinitionIndex = 57777;

	class ConfigPlayChessBGQuadFade : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* Curve; // 0x18
		::System::Boolean FadeIn; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single duration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYCHESSBGQUADFADE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYCHESSBGQUADFADE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

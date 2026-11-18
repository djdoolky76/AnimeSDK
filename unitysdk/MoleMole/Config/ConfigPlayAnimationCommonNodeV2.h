#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGPLAYANIMATIONCOMMONNODEV2_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A032840)
#define MOLEMOLE_CONFIG_CONFIGPLAYANIMATIONCOMMONNODEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0328B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayAnimationCommonNodeV2_TypeDefinitionIndex = 91911;

	class ConfigPlayAnimationCommonNodeV2 : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* AnimationName4Blackboard; // 0x18
		::System::String* AnimationName; // 0x20
		::System::String* AnimCompKey; // 0x28
		::System::Boolean IsUseBlackboard; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYANIMATIONCOMMONNODEV2__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYANIMATIONCOMMONNODEV2_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

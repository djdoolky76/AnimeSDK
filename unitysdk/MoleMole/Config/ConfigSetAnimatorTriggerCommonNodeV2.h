#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigConditionPredicateNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSETANIMATORTRIGGERCOMMONNODEV2_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1BA3A9B0)
#define MOLEMOLE_CONFIG_CONFIGSETANIMATORTRIGGERCOMMONNODEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA3AA20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetAnimatorTriggerCommonNodeV2_TypeDefinitionIndex = 54038;

	class ConfigSetAnimatorTriggerCommonNodeV2 : public ::MoleMole::Config::ConfigConditionPredicateNode
	{
	public:
		::System::String* ParamName; // 0x28
		::System::String* AnimCompKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETANIMATORTRIGGERCOMMONNODEV2__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETANIMATORTRIGGERCOMMONNODEV2_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

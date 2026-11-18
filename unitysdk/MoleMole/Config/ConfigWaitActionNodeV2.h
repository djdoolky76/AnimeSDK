#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGWAITACTIONNODEV2_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B92E7E0)
#define MOLEMOLE_CONFIG_CONFIGWAITACTIONNODEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92E850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWaitActionNodeV2_TypeDefinitionIndex = 54935;

	class ConfigWaitActionNodeV2 : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* TimeScale; // 0x18
		::System::String* WaitSeconds; // 0x20
		::System::Single FixedWaitSeconds; // 0x28
		::System::Boolean UseBlackBoardValue; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAITACTIONNODEV2__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAITACTIONNODEV2_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGSETCAMERACENTER_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16418EA0)
#define MOLEMOLE_CONFIG_CONFIGSETCAMERACENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16418F60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetCameraCenter_TypeDefinitionIndex = 70846;

	class ConfigSetCameraCenter : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* key; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETCAMERACENTER__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETCAMERACENTER_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

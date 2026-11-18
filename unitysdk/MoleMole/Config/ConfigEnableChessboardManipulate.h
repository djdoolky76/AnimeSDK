#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGENABLECHESSBOARDMANIPULATE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B916F20)
#define MOLEMOLE_CONFIG_CONFIGENABLECHESSBOARDMANIPULATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B916FE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEnableChessboardManipulate_TypeDefinitionIndex = 89547;

	class ConfigEnableChessboardManipulate : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean Total; // 0x18
		::System::Boolean Enable; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENABLECHESSBOARDMANIPULATE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENABLECHESSBOARDMANIPULATE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

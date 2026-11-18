#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class IntUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSHOWPOPWINDOWNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16408B80)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSHOWPOPWINDOWNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16408C40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardShowPopWindowNode_TypeDefinitionIndex = 59510;

	class ConfigChessboardShowPopWindowNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::IntUISpecialNum* PopID; // 0x18
		::MoleMole::Config::IntUISpecialNum* ShowPopType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDSHOWPOPWINDOWNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDSHOWPOPWINDOWNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

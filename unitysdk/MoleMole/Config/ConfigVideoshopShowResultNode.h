#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGVIDEOSHOPSHOWRESULTNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1641EE50)
#define MOLEMOLE_CONFIG_CONFIGVIDEOSHOPSHOWRESULTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1641EEC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigVideoshopShowResultNode_TypeDefinitionIndex = 53794;

	class ConfigVideoshopShowResultNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* ArgsKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIDEOSHOPSHOWRESULTNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIDEOSHOPSHOWRESULTNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

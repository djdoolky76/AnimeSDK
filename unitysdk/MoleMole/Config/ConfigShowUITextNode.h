#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSHOWUITEXTNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A768970)
#define MOLEMOLE_CONFIG_CONFIGSHOWUITEXTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7689E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShowUITextNode_TypeDefinitionIndex = 91150;

	class ConfigShowUITextNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* UIText; // 0x18
		::System::String* TextKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHOWUITEXTNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHOWUITEXTNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

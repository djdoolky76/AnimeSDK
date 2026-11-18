#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGRENDERVISIBLENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x11E9C430)
#define MOLEMOLE_CONFIG_CONFIGRENDERVISIBLENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11E9C4A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRenderVisibleNode_TypeDefinitionIndex = 67958;

	class ConfigRenderVisibleNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* Renderer; // 0x18
		::System::Boolean Visible; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGRENDERVISIBLENODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGRENDERVISIBLENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

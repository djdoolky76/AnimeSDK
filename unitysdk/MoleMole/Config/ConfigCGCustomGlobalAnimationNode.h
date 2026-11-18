#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCGCUSTOMGLOBALANIMATIONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x19095E50)
#define MOLEMOLE_CONFIG_CONFIGCGCUSTOMGLOBALANIMATIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19095EC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCGCustomGlobalAnimationNode_TypeDefinitionIndex = 76610;

	class ConfigCGCustomGlobalAnimationNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* Duration; // 0x18
		::System::String* Curve; // 0x20
		::System::String* MonoCGCustomGlobalAnimationGo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCGCUSTOMGLOBALANIMATIONNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCGCUSTOMGLOBALANIMATIONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

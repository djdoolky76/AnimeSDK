#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseFlowNode.h"

class ADCIIHIOAMH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSWITCHFLOWNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFFE38C0)
#define MOLEMOLE_CONFIG_CONFIGSWITCHFLOWNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE39B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSwitchFlowNode_TypeDefinitionIndex = 72447;

	class ConfigSwitchFlowNode : public ::MoleMole::Config::ConfigUIBaseFlowNode
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* Conditions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSWITCHFLOWNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSWITCHFLOWNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

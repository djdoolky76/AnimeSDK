#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGPRINTFNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1BA3A900)
#define MOLEMOLE_CONFIG_CONFIGPRINTFNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA3A970)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPrintfNode_TypeDefinitionIndex = 54963;

	class ConfigPrintfNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* BlackboardValue; // 0x18
		::System::String* LogStr; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPRINTFNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPRINTFNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

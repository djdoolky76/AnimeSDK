#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGPLAYOVERWRITEGRIDSTATETEXTURECHANGE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16418DA0)
#define MOLEMOLE_CONFIG_CONFIGPLAYOVERWRITEGRIDSTATETEXTURECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16418E60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayOverwriteGridStateTextureChange_TypeDefinitionIndex = 44725;

	class ConfigPlayOverwriteGridStateTextureChange : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYOVERWRITEGRIDSTATETEXTURECHANGE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYOVERWRITEGRIDSTATETEXTURECHANGE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

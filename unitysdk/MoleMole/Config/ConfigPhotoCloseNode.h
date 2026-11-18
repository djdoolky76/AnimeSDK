#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGPHOTOCLOSENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x12776470)
#define MOLEMOLE_CONFIG_CONFIGPHOTOCLOSENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x127764E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPhotoCloseNode_TypeDefinitionIndex = 41168;

	class ConfigPhotoCloseNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOCLOSENODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOCLOSENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

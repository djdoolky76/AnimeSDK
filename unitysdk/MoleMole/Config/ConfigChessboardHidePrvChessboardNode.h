#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDHIDEPRVCHESSBOARDNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x19230A40)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDHIDEPRVCHESSBOARDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19230B00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardHidePrvChessboardNode_TypeDefinitionIndex = 63868;

	class ConfigChessboardHidePrvChessboardNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDHIDEPRVCHESSBOARDNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDHIDEPRVCHESSBOARDNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

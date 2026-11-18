#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEGBAJIIIBH.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHANGEMASKNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B9142F0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHANGEMASKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9143B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardChangeMaskNode_TypeDefinitionIndex = 68490;

	class ConfigChessboardChangeMaskNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::EEGBAJIIIBH EventMaskType; // 0x18
		::System::Boolean Enable; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHANGEMASKNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHANGEMASKNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

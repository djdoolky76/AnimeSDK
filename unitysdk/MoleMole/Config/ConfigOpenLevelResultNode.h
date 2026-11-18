#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGOPENLEVELRESULTNODE_COMMITVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1BA398D0)
#define MOLEMOLE_CONFIG_CONFIGOPENLEVELRESULTNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1BA39920)
#define MOLEMOLE_CONFIG_CONFIGOPENLEVELRESULTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA39990)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigOpenLevelResultNode_TypeDefinitionIndex = 49113;

	class ConfigOpenLevelResultNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean IsCommitLater; // 0x18
		::System::Boolean IsWarmupUI; // 0x19
		::System::Boolean IsAutoCommit; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOPENLEVELRESULTNODE__CTOR_OFFSET))(this);
		}

		::System::Void CommitValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOPENLEVELRESULTNODE_COMMITVALUECHANGED_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOPENLEVELRESULTNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

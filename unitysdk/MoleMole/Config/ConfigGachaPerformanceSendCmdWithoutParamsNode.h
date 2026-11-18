#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigConditionPredicateNode.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESENDCMDWITHOUTPARAMSNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFAC65A0)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESENDCMDWITHOUTPARAMSNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC6610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceSendCmdWithoutParamsNode_TypeDefinitionIndex = 67690;

	class ConfigGachaPerformanceSendCmdWithoutParamsNode : public ::MoleMole::Config::ConfigConditionPredicateNode
	{
	public:
		::MoleMole::Config::ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType CmdType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESENDCMDWITHOUTPARAMSNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESENDCMDWITHOUTPARAMSNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ChessboardChangeGridType.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Config/DiffusionChangeGridConfig.h"
#include "unitysdk/MoleMole/Config/SinkAllThenRiseAllPhaseType.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGCHANGEGRIDNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x19296EC0)
#define MOLEMOLE_CONFIG_CONFIGCHANGEGRIDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19296FC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChangeGridNode_TypeDefinitionIndex = 81479;

	class ConfigChangeGridNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::DiffusionChangeGridConfig SinkDiffusionConfig; // 0x18
		::MoleMole::Config::SinkAllThenRiseAllPhaseType SinkAllThenRiseAllPhase; // 0x1C
		::MoleMole::Config::DiffusionChangeGridConfig RiseDiffusionConfig; // 0x20
		::System::Single ChangeGridDelay; // 0x24
		::MoleMole::Config::ChessboardChangeGridType changeGridType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHANGEGRIDNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHANGEGRIDNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

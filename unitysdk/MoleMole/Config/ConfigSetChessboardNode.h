#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/OMDJLKPMLMM.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/ProtoScript/NodeVisible.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class ListCellUISpecialNum; }
namespace MoleMole::Config { class ListIntUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGSETCHESSBOARDNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B8A3FA0)
#define MOLEMOLE_CONFIG_CONFIGSETCHESSBOARDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A4060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetChessboardNode_TypeDefinitionIndex = 63367;

	class ConfigSetChessboardNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ListCellUISpecialNum* PieceCellList; // 0x18
		::MoleMole::Config::ListIntUISpecialNum* PieceIndexList; // 0x20
		::ProtoScript::NodeState NodeState; // 0x28
		::OMDJLKPMLMM SubState; // 0x2C
		::ProtoScript::NodeVisible NodeVisible; // 0x30
		::System::Int32 EventID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETCHESSBOARDNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETCHESSBOARDNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

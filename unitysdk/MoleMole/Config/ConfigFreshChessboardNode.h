#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class ListCellUISpecialNum; }
namespace MoleMole::Config { class ListIntUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGFRESHCHESSBOARDNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x131E3A20)
#define MOLEMOLE_CONFIG_CONFIGFRESHCHESSBOARDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x131E3AE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFreshChessboardNode_TypeDefinitionIndex = 92907;

	class ConfigFreshChessboardNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ListIntUISpecialNum* PieceIndexList; // 0x18
		::MoleMole::Config::ListCellUISpecialNum* PieceCellList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFRESHCHESSBOARDNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFRESHCHESSBOARDNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

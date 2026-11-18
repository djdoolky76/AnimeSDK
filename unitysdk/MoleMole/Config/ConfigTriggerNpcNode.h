#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class FloatUISpecialNum; }
namespace MoleMole::Config { class IntUISpecialNum; }
namespace MoleMole::Config { class ListCellUISpecialNum; }
namespace MoleMole::Config { class ListIntUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGTRIGGERNPCNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x190AA420)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERNPCNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x190AA4E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTriggerNpcNode_TypeDefinitionIndex = 49183;

	class ConfigTriggerNpcNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* SaveUIDKey; // 0x18
		::MoleMole::Config::ListIntUISpecialNum* PieceIndexList; // 0x20
		::MoleMole::Config::IntUISpecialNum* NPCID; // 0x28
		::MoleMole::Config::ListCellUISpecialNum* PieceCellList; // 0x30
		::MoleMole::Config::IntUISpecialNum* UID; // 0x38
		::MoleMole::Config::StringUISpecialNum* State; // 0x40
		::MoleMole::Config::FloatUISpecialNum* Duration; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERNPCNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERNPCNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

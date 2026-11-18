#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class ConfigHollowChessboard_Flash; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDMODIFYFLOORSPLASH_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x18B919C0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDMODIFYFLOORSPLASH__CTOR_OFFSET UNITYSDK_OFFSET(0x18B91A80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardModifyFloorSplash_TypeDefinitionIndex = 47588;

	class ConfigChessboardModifyFloorSplash : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		// static const ::System::String* CHESSBOARD_IN_VIEW_MODIFY_FLOOR_LIST; // 0x0
		::MoleMole::Config::ConfigHollowChessboard_Flash* FlashConfig; // 0x18
		::System::Boolean InsertChessboard; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDMODIFYFLOORSPLASH__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDMODIFYFLOORSPLASH_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class ConfigHollowChessboard_Flash; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDELEVATORDOWNSPLASH_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x18B918C0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDELEVATORDOWNSPLASH__CTOR_OFFSET UNITYSDK_OFFSET(0x18B91980)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardElevatorDownSplash_TypeDefinitionIndex = 66753;

	class ConfigChessboardElevatorDownSplash : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		// static const ::System::String* CHESSBOARD_ELEVATOR_DOWN_CHESSBOARDUID; // 0x0
		::MoleMole::Config::ConfigHollowChessboard_Flash* FlashConfig; // 0x18
		::System::Single DelayHide; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDELEVATORDOWNSPLASH__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDELEVATORDOWNSPLASH_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

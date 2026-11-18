#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class ChessBoardIconAnimItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDICONANIM_CUSTOMADDFUNCTION_OFFSET UNITYSDK_OFFSET(0x11E8BC90)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDICONANIM_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x11E8BC10)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDICONANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x11E8BD10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardIconAnim_TypeDefinitionIndex = 48014;

	class ConfigChessboardIconAnim : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ChessBoardIconAnimItem*>* ChessBoardIconAnimGroup; // 0x18
		::System::Boolean UseSpecific; // 0x20
		::System::Byte _padding0[0x3];
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x24
		::System::Single OverrideWaitTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDICONANIM__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDICONANIM_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::MoleMole::Config::ChessBoardIconAnimItem* CustomAddFunction()
		{
			return ((::MoleMole::Config::ChessBoardIconAnimItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDICONANIM_CUSTOMADDFUNCTION_OFFSET))(this);
		}
	};
}

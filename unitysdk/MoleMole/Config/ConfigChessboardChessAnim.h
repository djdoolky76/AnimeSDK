#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class ChessBoardChessAnimItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHESSANIM_CUSTOMADDFUNCTION_OFFSET UNITYSDK_OFFSET(0x16408A50)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHESSANIM_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16408970)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHESSANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x16408AC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardChessAnim_TypeDefinitionIndex = 75752;

	class ConfigChessboardChessAnim : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* PivotCellKey; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::ChessBoardChessAnimItem*>* ChessBoardChessAnimGroup; // 0x20
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x28
		::System::Single OverrideWaitTime; // 0x2C
		::System::Boolean UseCustomPivot; // 0x30
		::System::Boolean UseSpecific; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHESSANIM__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHESSANIM_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::MoleMole::Config::ChessBoardChessAnimItem* CustomAddFunction()
		{
			return ((::MoleMole::Config::ChessBoardChessAnimItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHESSANIM_CUSTOMADDFUNCTION_OFFSET))(this);
		}
	};
}

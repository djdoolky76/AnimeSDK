#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector2.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class ChessBoardChessAnimItemForList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM_CUSTOMADDFUNCTION_OFFSET UNITYSDK_OFFSET(0x1276FF30)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1276FE70)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1276FFA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardGroupChessAnim_TypeDefinitionIndex = 46231;

	class ConfigChessboardGroupChessAnim : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ChessBoardChessAnimItemForList*>* ChessBoardChessRandomAnimList; // 0x18
		::System::String* PivotCellKey; // 0x20
		::UnityEngine::Vector2 InWaveTimeRange; // 0x28
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x30
		::System::Single OverrideWaitTime; // 0x34
		::MoleMole::Vector2Int RelativePos; // 0x38
		::UnityEngine::Vector2 RadiateWaveTimeRange; // 0x40
		::System::Boolean UseSpecific; // 0x48
		::System::Boolean UseCustomPivot; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::MoleMole::Config::ChessBoardChessAnimItemForList* CustomAddFunction()
		{
			return ((::MoleMole::Config::ChessBoardChessAnimItemForList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM_CUSTOMADDFUNCTION_OFFSET))(this);
		}
	};
}

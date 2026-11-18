#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }
namespace MoleMole { class HackerGameBaseDamage; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODE_APPLYLASERDAMAGE_OFFSET UNITYSDK_OFFSET(0x142F3990)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x142F1ED0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODE_ISINLASERAREA_OFFSET UNITYSDK_OFFSET(0x142F3900)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x142F3A50)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameLaserNode_TypeDefinitionIndex = 53654;

	class HackerGameLaserNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntityCollection* chessEntityCollection, ::MoleMole::ChessEntityCollection* playerEntityCollection, ::MoleMole::HackerGameBaseDamage* damage, ::MoleMole::HollowChessboard::HollowCell luCell, ::MoleMole::HollowChessboard::HollowCell rbCell)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntityCollection*, ::MoleMole::ChessEntityCollection*, ::MoleMole::HackerGameBaseDamage*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODE_INVOKE_OFFSET))(this, chessEntityCollection, playerEntityCollection, damage, luCell, rbCell);
		}

		static ::System::Void ApplyLaserDamage(::MoleMole::ChessEntity* source, ::MoleMole::ChessEntity* target, ::MoleMole::HackerGameBaseDamage* damage, ::MoleMole::HollowChessboard::HollowCell position)
		{
			return ((::System::Void(*)(::MoleMole::ChessEntity*, ::MoleMole::ChessEntity*, ::MoleMole::HackerGameBaseDamage*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODE_APPLYLASERDAMAGE_OFFSET))(source, target, damage, position);
		}

		static ::System::Boolean IsInLaserArea(::System::ValueTuple_2<::System::Int32, ::System::Int32> xRange, ::System::ValueTuple_2<::System::Int32, ::System::Int32> yRange, ::MoleMole::HollowChessboard::HollowCell position)
		{
			return ((::System::Boolean(*)(::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODE_ISINLASERAREA_OFFSET))(xRange, yRange, position);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class HackerGameBaseDamage; }

#define MOLEMOLE_FLOWCANVAS_CONSTRUCTDAMAGEDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D090B0)
#define MOLEMOLE_FLOWCANVAS_CONSTRUCTDAMAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D09180)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ConstructDamageData_TypeDefinitionIndex = 81629;

	class ConstructDamageData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CONSTRUCTDAMAGEDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::HackerGameDamageData Invoke(::MoleMole::ChessEntity* source, ::MoleMole::ChessEntity* target, ::MoleMole::HackerGameBaseDamage* damage, ::MoleMole::HollowChessboard::HollowCell position)
		{
			return ((::MoleMole::HackerGameDamageData(*)(::PVOID, ::MoleMole::ChessEntity*, ::MoleMole::ChessEntity*, ::MoleMole::HackerGameBaseDamage*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CONSTRUCTDAMAGEDATA_INVOKE_OFFSET))(this, source, target, damage, position);
		}
	};
}

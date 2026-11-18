#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Object.h"

class AIKGHHJKNCE;
class MPKBDIJDMAP;

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x163E5A20)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x163E5A30)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridEventEntityAction___c__DisplayClass5_0_TypeDefinitionIndex = 54132;

	class GridEventEntityAction___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::AIKGHHJKNCE* chessPieceProxy; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0(::MPKBDIJDMAP* p, ::MoleMole::HollowPieceBlendMode m)
		{
			return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_0__RUN_B__0_OFFSET))(this, p, m);
		}
	};
}

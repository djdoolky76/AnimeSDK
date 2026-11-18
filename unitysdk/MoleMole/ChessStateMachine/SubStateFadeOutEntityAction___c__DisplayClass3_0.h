#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Object.h"

class AIKGHHJKNCE;
class MPKBDIJDMAP;
namespace MoleMole::ChessStateMachine { class SubStateFadeOutEntityAction; }

#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x121A26C0)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x121A26D0)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_0__RUN_B__2_OFFSET UNITYSDK_OFFSET(0x121A2870)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_0__RUN_G____CLOSESUBSTATE_1_OFFSET UNITYSDK_OFFSET(0x121A2700)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int SubStateFadeOutEntityAction___c__DisplayClass3_0_TypeDefinitionIndex = 79117;

	class SubStateFadeOutEntityAction___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MoleMole::ChessStateMachine::SubStateFadeOutEntityAction* __4__this; // 0x10
		::AIKGHHJKNCE* chessPieceProxy; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_0__RUN_B__0_OFFSET))(this);
		}

		::System::Void _Run_b__2(::MPKBDIJDMAP* p, ::MoleMole::HollowPieceBlendMode m)
		{
			return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_0__RUN_B__2_OFFSET))(this, p, m);
		}

		::System::Void _Run_g____closeSubState_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_0__RUN_G____CLOSESUBSTATE_1_OFFSET))(this);
		}
	};
}

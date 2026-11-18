#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class PINBHKFHPAL;

#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x16515910)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTACTION_RUN_OFFSET UNITYSDK_OFFSET(0x16515530)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16515AC0)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTACTION__RUN_B__2_0_OFFSET UNITYSDK_OFFSET(0x16515AD0)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTACTION__RUN_G____CLOSESUBSTATE_2_1_OFFSET UNITYSDK_OFFSET(0x16515730)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTACTION___BASE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x16515AF0)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x16515B80)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int SubStateFadeOutAction_TypeDefinitionIndex = 67773;

	class SubStateFadeOutAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::System::Boolean UseTextureSheetFade; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 FadeOutConfigID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void _Run_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTACTION__RUN_B__2_0_OFFSET))(this);
		}

		::System::Void _Run_g____closeSubState_2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTACTION__RUN_G____CLOSESUBSTATE_2_1_OFFSET))(this);
		}

		::System::Void __base_ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTACTION___BASE_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_Run(::PINBHKFHPAL* P0)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}

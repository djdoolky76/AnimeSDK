#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class PINBHKFHPAL;

#define MOLEMOLE_CHESSSTATEMACHINE_CLEARNPCBODYACTION_RUN_OFFSET UNITYSDK_OFFSET(0x1079EF20)
#define MOLEMOLE_CHESSSTATEMACHINE_CLEARNPCBODYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1079EFD0)
#define MOLEMOLE_CHESSSTATEMACHINE_CLEARNPCBODYACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x1079EFE0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ClearNpcBodyAction_TypeDefinitionIndex = 89208;

	class ClearNpcBodyAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::System::Int32 ScreenIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CLEARNPCBODYACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CLEARNPCBODYACTION_RUN_OFFSET))(this, context);
		}

		::System::Void __base_Run(::PINBHKFHPAL* P0)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CLEARNPCBODYACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}

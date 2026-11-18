#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"

class BEKNDGPAOBH;
class PINBHKFHPAL;

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWPLAYERONACTION_RUN_OFFSET UNITYSDK_OFFSET(0x12759E70)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWPLAYERONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12759EC0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWPLAYERONACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x12759ED0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowPlayerOnAction_TypeDefinitionIndex = 88038;

	class ShowPlayerOnAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::BEKNDGPAOBH* _actionContext; // 0x28
		::System::Boolean PrevNode; // 0x30
		::MoleMole::PlayerOnViewState PlayerOnState; // 0x31
		::System::Boolean NoFixedPlayerOnState; // 0x32
		::System::Boolean ForceDefault; // 0x33

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWPLAYERONACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWPLAYERONACTION_RUN_OFFSET))(this, context);
		}

		::System::Void __base_Run(::PINBHKFHPAL* P0)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWPLAYERONACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class PINBHKFHPAL;

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWBLOCKEDVIEWACTION_RUN_OFFSET UNITYSDK_OFFSET(0x11E6FCA0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWBLOCKEDVIEWACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11E6FF70)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWBLOCKEDVIEWACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x11E6FF80)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowBlockedViewAction_TypeDefinitionIndex = 46168;

	class ShowBlockedViewAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWBLOCKEDVIEWACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWBLOCKEDVIEWACTION_RUN_OFFSET))(this, context);
		}

		::System::Void __base_Run(::PINBHKFHPAL* P0)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWBLOCKEDVIEWACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class PINBHKFHPAL;

#define MOLEMOLE_CHESSSTATEMACHINE_AUTOSLEEPRESETACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0xFFC2D30)
#define MOLEMOLE_CHESSSTATEMACHINE_AUTOSLEEPRESETACTION_RUN_OFFSET UNITYSDK_OFFSET(0xFFC2D40)
#define MOLEMOLE_CHESSSTATEMACHINE_AUTOSLEEPRESETACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC2E90)
#define MOLEMOLE_CHESSSTATEMACHINE_AUTOSLEEPRESETACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0xFFC2EA0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int AutoSleepResetAction_TypeDefinitionIndex = 64579;

	class AutoSleepResetAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_AUTOSLEEPRESETACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_AUTOSLEEPRESETACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_AUTOSLEEPRESETACTION_RUN_OFFSET))(this, context);
		}

		::System::Void __base_Run(::PINBHKFHPAL* P0)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_AUTOSLEEPRESETACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PinballSubsystem_PinballBodyInfo.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_PinballMoverFrameContext_TypeDefinitionIndex = 56761;

	struct alignas(4) PinballSubsystem_PinballMoverFrameContext
	{
		::MoleMole::PinballSubsystem_PinballBodyInfo Body; // 0x10
		::System::Boolean IsActiveBall; // 0x28
		::System::Boolean UsesPaddleRehitGuard; // 0x29
		::System::Boolean RequiresActiveBallState; // 0x2A
		::System::Boolean UsesExternalMoveInput; // 0x2B
	};
}

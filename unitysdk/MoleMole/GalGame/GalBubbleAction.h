#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalGameActionBase.h"
#include "unitysdk/Share/EPerformInterruptType.h"

#define MOLEMOLE_GALGAME_GALBUBBLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1466A280)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalBubbleAction_TypeDefinitionIndex = 80897;

	class GalBubbleAction : public ::MoleMole::GalGame::GalGameActionBase
	{
	public:
		::Share::EPerformInterruptType InterruptType; // 0x10
		::System::Boolean DirectRestart; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLEACTION__CTOR_OFFSET))(this);
		}
	};
}

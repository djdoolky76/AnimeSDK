#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PinballPuzzleLaunch; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PINBALLPUZZLELAUNCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D914B60)
#define RPG_GAMECORE_PINBALLPUZZLELAUNCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D914B70)
#define RPG_GAMECORE_PINBALLPUZZLELAUNCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D914B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PinballPuzzleLaunch_TypeDefinitionIndex = 22007;

	class PinballPuzzleLaunch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINBALLPUZZLELAUNCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PinballPuzzleLaunch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PinballPuzzleLaunch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINBALLPUZZLELAUNCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PinballPuzzleLaunch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PinballPuzzleLaunch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINBALLPUZZLELAUNCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

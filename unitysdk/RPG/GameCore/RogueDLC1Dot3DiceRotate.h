#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLC1Dot3DiceRotate; }

#define RPG_GAMECORE_ROGUEDLC1DOT3DICEROTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D985C30)
#define RPG_GAMECORE_ROGUEDLC1DOT3DICEROTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D985C40)
#define RPG_GAMECORE_ROGUEDLC1DOT3DICEROTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D985C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3DiceRotate_TypeDefinitionIndex = 22273;

	class RogueDLC1Dot3DiceRotate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean StopImmediately; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3DICEROTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3DiceRotate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3DiceRotate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3DICEROTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3DiceRotate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3DiceRotate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3DICEROTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerSelectMotionMode; }

#define RPG_GAMECORE_PLAYERSELECTMOTIONMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93C230)
#define RPG_GAMECORE_PLAYERSELECTMOTIONMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D93C240)
#define RPG_GAMECORE_PLAYERSELECTMOTIONMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93C200)

namespace RPG::GameCore
{
	class PlayerSelectMotionMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::CharacterMotionMode MotionMode; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERSELECTMOTIONMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerSelectMotionMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerSelectMotionMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERSELECTMOTIONMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerSelectMotionMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerSelectMotionMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERSELECTMOTIONMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

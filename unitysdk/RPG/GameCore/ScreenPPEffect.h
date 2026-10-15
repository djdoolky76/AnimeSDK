#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenPPEffectType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ScreenPPEffect; }

#define RPG_GAMECORE_SCREENPPEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5D4C0)
#define RPG_GAMECORE_SCREENPPEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA5D4D0)
#define RPG_GAMECORE_SCREENPPEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5D480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScreenPPEffect_TypeDefinitionIndex = 23762;

	class ScreenPPEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ScreenPPEffectType Type; // 0x18
		::System::Boolean Active; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENPPEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScreenPPEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScreenPPEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENPPEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScreenPPEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScreenPPEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENPPEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

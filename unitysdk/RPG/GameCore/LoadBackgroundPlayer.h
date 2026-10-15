#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoadBackgroundPlayer; }

#define RPG_GAMECORE_LOADBACKGROUNDPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BC0E0)
#define RPG_GAMECORE_LOADBACKGROUNDPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7BC0F0)
#define RPG_GAMECORE_LOADBACKGROUNDPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7BC0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadBackgroundPlayer_TypeDefinitionIndex = 20222;

	class LoadBackgroundPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsSyncLoad; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADBACKGROUNDPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoadBackgroundPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoadBackgroundPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADBACKGROUNDPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoadBackgroundPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoadBackgroundPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADBACKGROUNDPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

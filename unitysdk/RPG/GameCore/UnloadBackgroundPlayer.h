#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UnloadBackgroundPlayer; }

#define RPG_GAMECORE_UNLOADBACKGROUNDPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC77CC0)
#define RPG_GAMECORE_UNLOADBACKGROUNDPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC77CD0)
#define RPG_GAMECORE_UNLOADBACKGROUNDPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC77C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnloadBackgroundPlayer_TypeDefinitionIndex = 20221;

	class UnloadBackgroundPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 UnloadCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADBACKGROUNDPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnloadBackgroundPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnloadBackgroundPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADBACKGROUNDPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnloadBackgroundPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnloadBackgroundPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADBACKGROUNDPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

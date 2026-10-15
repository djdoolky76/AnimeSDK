#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RefreshBattleAvatarPanel; }

#define RPG_GAMECORE_REFRESHBATTLEAVATARPANEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D975FB0)
#define RPG_GAMECORE_REFRESHBATTLEAVATARPANEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D975FC0)
#define RPG_GAMECORE_REFRESHBATTLEAVATARPANEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D975EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshBattleAvatarPanel_TypeDefinitionIndex = 22817;

	class RefreshBattleAvatarPanel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHBATTLEAVATARPANEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshBattleAvatarPanel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshBattleAvatarPanel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHBATTLEAVATARPANEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshBattleAvatarPanel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshBattleAvatarPanel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHBATTLEAVATARPANEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RogueTournCollectionShowUI; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA35A80)
#define RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA35A90)
#define RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA35A50)

namespace RPG::GameCore
{
	class RogueTournCollectionShowUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterUI; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitUI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournCollectionShowUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournCollectionShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournCollectionShowUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournCollectionShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

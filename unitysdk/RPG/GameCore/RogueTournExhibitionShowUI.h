#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RogueTournExhibitionShowUI; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ROGUETOURNEXHIBITIONSHOWUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA38DA0)
#define RPG_GAMECORE_ROGUETOURNEXHIBITIONSHOWUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA38DB0)
#define RPG_GAMECORE_ROGUETOURNEXHIBITIONSHOWUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA38D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournExhibitionShowUI_TypeDefinitionIndex = 22118;

	class RogueTournExhibitionShowUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterUI; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitUI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXHIBITIONSHOWUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournExhibitionShowUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournExhibitionShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXHIBITIONSHOWUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournExhibitionShowUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournExhibitionShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXHIBITIONSHOWUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowRogueTalkUI; }

#define RPG_GAMECORE_SHOWROGUETALKUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE3D60)
#define RPG_GAMECORE_SHOWROGUETALKUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE3C20)
#define RPG_GAMECORE_SHOWROGUETALKUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE3BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowRogueTalkUI_TypeDefinitionIndex = 21110;

	class ShowRogueTalkUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUETALKUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRogueTalkUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRogueTalkUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUETALKUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRogueTalkUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRogueTalkUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUETALKUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

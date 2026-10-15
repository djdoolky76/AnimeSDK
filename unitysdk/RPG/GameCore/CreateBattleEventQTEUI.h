#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateBattleEventQTEUI; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CREATEBATTLEEVENTQTEUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E23F0)
#define RPG_GAMECORE_CREATEBATTLEEVENTQTEUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E2400)
#define RPG_GAMECORE_CREATEBATTLEEVENTQTEUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E23B0)

namespace RPG::GameCore
{
	class CreateBattleEventQTEUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* EventID; // 0x18
		::System::Boolean IsShow; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTQTEUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateBattleEventQTEUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateBattleEventQTEUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTQTEUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateBattleEventQTEUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateBattleEventQTEUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTQTEUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

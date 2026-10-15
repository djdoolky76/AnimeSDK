#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowTalkUI; }

#define RPG_GAMECORE_SHOWTALKUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB83B0)
#define RPG_GAMECORE_SHOWTALKUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB83C0)
#define RPG_GAMECORE_SHOWTALKUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB8370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTalkUI_TypeDefinitionIndex = 20841;

	class ShowTalkUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18
		::System::Boolean ShowDialogControlUI; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTALKUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTalkUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTalkUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTALKUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTalkUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTalkUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTALKUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

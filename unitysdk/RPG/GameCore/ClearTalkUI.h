#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearTalkUI; }

#define RPG_GAMECORE_CLEARTALKUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B71B0)
#define RPG_GAMECORE_CLEARTALKUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B71C0)
#define RPG_GAMECORE_CLEARTALKUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B7180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearTalkUI_TypeDefinitionIndex = 21910;

	class ClearTalkUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HideControlBtns; // 0x18
		::System::Boolean SuccessWithoutTalk; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTALKUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearTalkUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearTalkUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTALKUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearTalkUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearTalkUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTALKUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCharacterShowSummonUI; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9BBA0)
#define RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9BBB0)
#define RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9BB60)

namespace RPG::GameCore
{
	class SetCharacterShowSummonUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ShowSummoner; // 0x20
		::System::Boolean ShowSummoned; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterShowSummonUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterShowSummonUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterShowSummonUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterShowSummonUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

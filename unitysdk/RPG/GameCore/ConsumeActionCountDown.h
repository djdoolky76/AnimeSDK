#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConsumeActionCountDown; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CONSUMEACTIONCOUNTDOWN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DADC0)
#define RPG_GAMECORE_CONSUMEACTIONCOUNTDOWN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5DAE20)
#define RPG_GAMECORE_CONSUMEACTIONCOUNTDOWN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5DAD30)

namespace RPG::GameCore
{
	class ConsumeActionCountDown : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ConsumeValue; // 0x18
		::System::Boolean TriggerModifierEvent; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEACTIONCOUNTDOWN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConsumeActionCountDown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConsumeActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEACTIONCOUNTDOWN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConsumeActionCountDown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConsumeActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEACTIONCOUNTDOWN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

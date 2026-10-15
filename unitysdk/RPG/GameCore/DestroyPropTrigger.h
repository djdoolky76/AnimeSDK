#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DestroyPropTrigger; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_DESTROYPROPTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FD410)
#define RPG_GAMECORE_DESTROYPROPTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FD440)
#define RPG_GAMECORE_DESTROYPROPTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FD3C0)

namespace RPG::GameCore
{
	class DestroyPropTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean DoOnExit; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* TriggerPath; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYPROPTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyPropTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyPropTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYPROPTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyPropTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyPropTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYPROPTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

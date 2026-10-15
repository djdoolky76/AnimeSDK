#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TurnBasedModifierCallbackConfig; }

#define RPG_GAMECORE_TURNBASEDMODIFIERCALLBACKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC62670)
#define RPG_GAMECORE_TURNBASEDMODIFIERCALLBACKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC624E0)

namespace RPG::GameCore
{
	class TurnBasedModifierCallbackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TurnBasedModifierEvent Event; // 0x10
		::System::Int32 Priority; // 0x14
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CallbackConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCALLBACKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnBasedModifierCallbackConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnBasedModifierCallbackConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCALLBACKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

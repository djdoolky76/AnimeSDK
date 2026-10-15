#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtModifierEvent.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtModifierCallbackConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RTMODIFIERCALLBACKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA61930)
#define RPG_GAMECORE_RTMODIFIERCALLBACKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA617A0)

namespace RPG::GameCore
{
	class RtModifierCallbackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RtModifierEvent Event; // 0x10
		::System::Int32 Priority; // 0x14
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CallbackConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCALLBACKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtModifierCallbackConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtModifierCallbackConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCALLBACKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

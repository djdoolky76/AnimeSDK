#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindEntityEventConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDENTITYEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB88190)
#define RPG_GAMECORE_TIMEREWINDENTITYEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB87F70)

namespace RPG::GameCore
{
	class TimeRewindEntityEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EventName; // 0x10
		::System::Boolean TriggerInRewind; // 0x18
		::System::Boolean TriggerInForward; // 0x19
		::System::Boolean MinimumTrigger; // 0x1A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDENTITYEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindEntityEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindEntityEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDENTITYEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

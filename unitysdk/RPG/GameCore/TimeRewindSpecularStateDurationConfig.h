#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindSpecularStateDurationConfig; }

#define RPG_GAMECORE_TIMEREWINDSPECULARSTATEDURATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5BF80)
#define RPG_GAMECORE_TIMEREWINDSPECULARSTATEDURATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5BE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindSpecularStateDurationConfig_TypeDefinitionIndex = 16597;

	class TimeRewindSpecularStateDurationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single BlendTime; // 0x10
		::System::Single Duration; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSPECULARSTATEDURATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindSpecularStateDurationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindSpecularStateDurationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSPECULARSTATEDURATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

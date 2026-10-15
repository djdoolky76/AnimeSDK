#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindChildConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDCHILDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB871A0)
#define RPG_GAMECORE_TIMEREWINDCHILDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB87020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindChildConfig_TypeDefinitionIndex = 20661;

	class TimeRewindChildConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PropState PropState; // 0x10
		::System::Single StateNormalize; // 0x14
		::System::String* ChildStableStateName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCHILDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindChildConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindChildConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCHILDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

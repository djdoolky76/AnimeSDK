#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindPreloadConfig; }

#define RPG_GAMECORE_TIMEREWINDPRELOADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB891E0)
#define RPG_GAMECORE_TIMEREWINDPRELOADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB89090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindPreloadConfig_TypeDefinitionIndex = 16592;

	class TimeRewindPreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ReleaseTime; // 0x10
		::System::UInt32 MaxPreloadCount; // 0x14
		::System::Single ReleaseDistance; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDPRELOADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDPRELOADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

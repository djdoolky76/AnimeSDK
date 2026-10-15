#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkStorySwitchBackground; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D597F30)
#define RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D597F40)
#define RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D597EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStorySwitchBackground_TypeDefinitionIndex = 20948;

	class ClockParkStorySwitchBackground : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BackgroundPrefabPath; // 0x18
		::System::String* BackgroundFrontPrefabPath; // 0x20
		::System::Boolean BackgroundFrontVisible; // 0x28
		::System::Boolean WaitFinish; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStorySwitchBackground* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStorySwitchBackground*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStorySwitchBackground* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStorySwitchBackground*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

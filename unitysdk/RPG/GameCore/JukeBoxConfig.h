#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JukeBoxConfig; }
namespace System { class String; }

#define RPG_GAMECORE_JUKEBOXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D775480)
#define RPG_GAMECORE_JUKEBOXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D775330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JukeBoxConfig_TypeDefinitionIndex = 16397;

	class JukeBoxConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PlayEvent; // 0x10
		::System::String* SwitchGroup; // 0x18
		::System::String* LoudnessRTPC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JUKEBOXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::JukeBoxConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::JukeBoxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JUKEBOXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StimulusItemConfig; }

#define RPG_GAMECORE_STIMULUSITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB243C0)
#define RPG_GAMECORE_STIMULUSITEMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB24310)

namespace RPG::GameCore
{
	class StimulusItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Range; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STIMULUSITEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StimulusItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StimulusItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STIMULUSITEMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

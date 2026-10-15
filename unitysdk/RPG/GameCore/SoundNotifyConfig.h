#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SoundNotifyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SOUNDNOTIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF1DE0)
#define RPG_GAMECORE_SOUNDNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF1D10)

namespace RPG::GameCore
{
	class SoundNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SoundName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOUNDNOTIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SoundNotifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SoundNotifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOUNDNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimSpeedNotifyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMSPEEDNOTIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F30E0)
#define RPG_GAMECORE_ANIMSPEEDNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F2F20)

namespace RPG::GameCore
{
	class AnimSpeedNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LayerName; // 0x10
		::System::String* StateName; // 0x18
		::System::String* SpeedName; // 0x20
		::System::Single BeatNum; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMSPEEDNOTIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimSpeedNotifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimSpeedNotifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMSPEEDNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

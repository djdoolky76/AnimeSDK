#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimRTPCConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMRTPCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D6D10)
#define RPG_GAMECORE_FIVEDIMRTPCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D6AA0)

namespace RPG::GameCore
{
	class FiveDimRTPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RTPCName; // 0x10
		::System::Single DefaultValue; // 0x18
		::System::Single Min; // 0x1C
		::System::Single Max; // 0x20
		::System::Single ResetTime; // 0x24
		::System::String* EventOnLeaveDefault; // 0x28
		::System::String* EventOnBackToDefault; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRTPCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimRTPCConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimRTPCConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRTPCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

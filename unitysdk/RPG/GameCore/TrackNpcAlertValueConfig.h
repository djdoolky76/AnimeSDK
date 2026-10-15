#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrackNpcAlertValueConfig; }

#define RPG_GAMECORE_TRACKNPCALERTVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC29E50)
#define RPG_GAMECORE_TRACKNPCALERTVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC29C00)

namespace RPG::GameCore
{
	class TrackNpcAlertValueConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single CrouchDelta; // 0x10
		::System::Single StandDelta; // 0x14
		::System::Single WalkDelta; // 0x18
		::System::Single RunDelta; // 0x1C
		::System::Single FastRunDelta; // 0x20
		::System::Single RunValueStep; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCALERTVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrackNpcAlertValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrackNpcAlertValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCALERTVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindSpreadEffConfig; }

#define RPG_GAMECORE_TIMEREWINDSPREADEFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB89870)
#define RPG_GAMECORE_TIMEREWINDSPREADEFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB86990)

namespace RPG::GameCore
{
	class TimeRewindSpreadEffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single BaseRange; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSPREADEFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindSpreadEffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindSpreadEffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSPREADEFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

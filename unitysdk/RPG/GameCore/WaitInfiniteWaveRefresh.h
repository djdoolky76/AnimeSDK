#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class WaitInfiniteWaveRefresh; }

#define RPG_GAMECORE_WAITINFINITEWAVEREFRESH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9A990)
#define RPG_GAMECORE_WAITINFINITEWAVEREFRESH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9A9A0)
#define RPG_GAMECORE_WAITINFINITEWAVEREFRESH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9A960)

namespace RPG::GameCore
{
	class WaitInfiniteWaveRefresh : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* CustomString; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITINFINITEWAVEREFRESH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitInfiniteWaveRefresh* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitInfiniteWaveRefresh*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITINFINITEWAVEREFRESH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitInfiniteWaveRefresh* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitInfiniteWaveRefresh*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITINFINITEWAVEREFRESH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

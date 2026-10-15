#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionWaitSleep; }

#define RPG_GAMECORE_CAKERACEACTIONWAITSLEEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54A8D0)
#define RPG_GAMECORE_CAKERACEACTIONWAITSLEEP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54A8E0)
#define RPG_GAMECORE_CAKERACEACTIONWAITSLEEP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54A880)

namespace RPG::GameCore
{
	class CakeRaceActionWaitSleep : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 MinWaitTime; // 0x10
		::System::UInt32 MaxWaitTime; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONWAITSLEEP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionWaitSleep* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionWaitSleep*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONWAITSLEEP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionWaitSleep* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionWaitSleep*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONWAITSLEEP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

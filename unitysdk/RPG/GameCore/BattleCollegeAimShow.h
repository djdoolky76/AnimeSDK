#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleCollegeAimShow; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BATTLECOLLEGEAIMSHOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D453ED0)
#define RPG_GAMECORE_BATTLECOLLEGEAIMSHOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D453EE0)
#define RPG_GAMECORE_BATTLECOLLEGEAIMSHOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D453EA0)

namespace RPG::GameCore
{
	class BattleCollegeAimShow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 AimID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CurValue; // 0x20
		::RPG::GameCore::DynamicFloat* TotalValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGEAIMSHOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleCollegeAimShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleCollegeAimShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGEAIMSHOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleCollegeAimShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleCollegeAimShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGEAIMSHOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

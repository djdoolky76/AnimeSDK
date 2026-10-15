#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNPCSetFrozen; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVNPCSETFROZEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A5250)
#define RPG_GAMECORE_ADVNPCSETFROZEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A5260)
#define RPG_GAMECORE_ADVNPCSETFROZEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A5220)

namespace RPG::GameCore
{
	class AdvNPCSetFrozen : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsFrozen; // 0x18
		::System::Boolean AffectCollider; // 0x19
		::System::Byte _padding0[0x6];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSETFROZEN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCSetFrozen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCSetFrozen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSETFROZEN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCSetFrozen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCSetFrozen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSETFROZEN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LockStance; }

#define RPG_GAMECORE_LOCKSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F19A0)
#define RPG_GAMECORE_LOCKSTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F1A00)
#define RPG_GAMECORE_LOCKSTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F1920)

namespace RPG::GameCore
{
	class LockStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* StanceCount; // 0x18
		::RPG::GameCore::DynamicFloat* StanceValueRatio; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKSTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKSTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKSTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

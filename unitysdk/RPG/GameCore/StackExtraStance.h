#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class StackExtraStance; }

#define RPG_GAMECORE_STACKEXTRASTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB03080)
#define RPG_GAMECORE_STACKEXTRASTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB03110)
#define RPG_GAMECORE_STACKEXTRASTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB02FD0)

namespace RPG::GameCore
{
	class StackExtraStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* StanceCount; // 0x18
		::RPG::GameCore::DynamicFloat* StanceValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKEXTRASTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackExtraStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackExtraStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKEXTRASTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackExtraStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackExtraStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKEXTRASTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

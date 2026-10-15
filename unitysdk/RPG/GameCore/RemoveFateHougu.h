#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RemoveFateHougu; }

#define RPG_GAMECORE_REMOVEFATEHOUGU_CTOR_OFFSET UNITYSDK_OFFSET(0x1D985370)
#define RPG_GAMECORE_REMOVEFATEHOUGU_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9853D0)
#define RPG_GAMECORE_REMOVEFATEHOUGU_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9852F0)

namespace RPG::GameCore
{
	class RemoveFateHougu : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* HouguID; // 0x18
		::RPG::GameCore::DynamicFloat* RemoveCount; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEFATEHOUGU_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveFateHougu* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveFateHougu*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEFATEHOUGU_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveFateHougu* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveFateHougu*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEFATEHOUGU_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

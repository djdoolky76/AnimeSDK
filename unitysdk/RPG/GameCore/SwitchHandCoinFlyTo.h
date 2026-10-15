#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SwitchHandCoinFlyTo; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHHANDCOINFLYTO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB41FF0)
#define RPG_GAMECORE_SWITCHHANDCOINFLYTO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB42000)
#define RPG_GAMECORE_SWITCHHANDCOINFLYTO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB41FB0)

namespace RPG::GameCore
{
	class SwitchHandCoinFlyTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* TargetPoint; // 0x20
		::System::Single Duration; // 0x28
		::System::Single MoveSpeed; // 0x2C
		::System::Boolean KeepAttach; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCOINFLYTO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandCoinFlyTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandCoinFlyTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCOINFLYTO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandCoinFlyTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandCoinFlyTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCOINFLYTO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

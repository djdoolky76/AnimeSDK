#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LockAnimatorSpeed; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_LOCKANIMATORSPEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7EFDC0)
#define RPG_GAMECORE_LOCKANIMATORSPEED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7EFDD0)
#define RPG_GAMECORE_LOCKANIMATORSPEED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7EFD90)

namespace RPG::GameCore
{
	class LockAnimatorSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* LockSpeed; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKANIMATORSPEED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockAnimatorSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockAnimatorSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKANIMATORSPEED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockAnimatorSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockAnimatorSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKANIMATORSPEED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

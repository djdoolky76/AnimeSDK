#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimAvatarMoveAbility.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimAvatarMoveAbilityConfig; }

#define RPG_GAMECORE_FIVEDIMAVATARMOVEABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B02E0)
#define RPG_GAMECORE_FIVEDIMAVATARMOVEABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AFEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAvatarMoveAbilityConfig_TypeDefinitionIndex = 16708;

	class FiveDimAvatarMoveAbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimAvatarMoveAbility Ability; // 0x10
		::System::Boolean LockMaxJumpEnergy; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 MaxJumpEnergy; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAVATARMOVEABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAvatarMoveAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAvatarMoveAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAVATARMOVEABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

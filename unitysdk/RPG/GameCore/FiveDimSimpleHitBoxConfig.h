#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleHitBoxHitPlayerAction.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSimpleHitBoxConfig; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DBDA0)
#define RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DBDB0)
#define RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DBD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleHitBoxConfig_TypeDefinitionIndex = 18605;

	class FiveDimSimpleHitBoxConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsSimpleHitBox; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FiveDimTriggerShape* HitBoxTriggerShape; // 0x18
		::System::Single HitLastTime; // 0x20
		::RPG::GameCore::FiveDimSimpleHitBoxHitPlayerAction HitPlayerAction; // 0x24
		::RPG::GameCore::LittleGameEvent* OnHitPlayerEvent; // 0x28
		::System::String* HitEvent; // 0x30
		::System::Boolean IsEnableOnInit; // 0x38
		::System::Byte _padding1[0x7];
		::RPG::GameCore::LittleGameEvent* OnInitEvent; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSimpleHitBoxConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSimpleHitBoxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSimpleHitBoxConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSimpleHitBoxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEHITBOXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

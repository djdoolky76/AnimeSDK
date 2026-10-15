#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimTrampolineConfig; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B3A10)
#define RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B3A20)
#define RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69B590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTrampolineConfig_TypeDefinitionIndex = 18544;

	class FiveDimTrampolineConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsTrampoline; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FiveDimTriggerShape* TrampolineTrigger; // 0x18
		::System::Boolean OverrideJumpParams; // 0x20
		::System::Byte _padding1[0x3];
		::System::Single TrampolineJumpHeight; // 0x24
		::System::Single TrampolineMusicJumpHeight; // 0x28
		::System::Byte _padding2[0x4];
		::RPG::GameCore::LittleGameEvent* OnTrampolineJump; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTrampolineConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTrampolineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTrampolineConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTrampolineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

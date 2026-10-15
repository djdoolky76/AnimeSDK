#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterPhaseConfig; }
namespace RPG::GameCore { class CharacterPhaseOverrideConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERPHASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D548C10)
#define RPG_GAMECORE_CHARACTERPHASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D548900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPhaseConfig_TypeDefinitionIndex = 16503;

	class CharacterPhaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PhaseNum; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* PhaseName; // 0x18
		::RPG::GameCore::DynamicFloat* PhaseMaxHPRatio; // 0x20
		::RPG::GameCore::DynamicFloat* PhaseStanceRatio; // 0x28
		::RPG::GameCore::DynamicFloat* PhaseStanceCount; // 0x30
		::RPG::GameCore::CharacterPhaseOverrideConfig* OverrideConfig; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterPhaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterPhaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

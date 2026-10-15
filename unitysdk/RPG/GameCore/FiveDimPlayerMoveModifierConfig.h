#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMoveParamModifierFloat; }
namespace RPG::GameCore { class FiveDimPlayerMoveModifierConfig; }

#define RPG_GAMECORE_FIVEDIMPLAYERMOVEMODIFIERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D2400)
#define RPG_GAMECORE_FIVEDIMPLAYERMOVEMODIFIERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D2410)
#define RPG_GAMECORE_FIVEDIMPLAYERMOVEMODIFIERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D23D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerMoveModifierConfig_TypeDefinitionIndex = 18552;

	class FiveDimPlayerMoveModifierConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean Modify; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FiveDimMoveParamModifierFloat* MaxSpeedMultiplier; // 0x18
		::RPG::GameCore::FiveDimMoveParamModifierFloat* AccDuration; // 0x20
		::RPG::GameCore::FiveDimMoveParamModifierFloat* BrakeDuration; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERMOVEMODIFIERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlayerMoveModifierConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlayerMoveModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERMOVEMODIFIERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlayerMoveModifierConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlayerMoveModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERMOVEMODIFIERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

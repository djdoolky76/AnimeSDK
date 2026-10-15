#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GravitySwitchLineJumpEnergyMode.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimGravitySwitchLineConfig; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGRAVITYSWITCHLINECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C2140)
#define RPG_GAMECORE_FIVEDIMGRAVITYSWITCHLINECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C2150)
#define RPG_GAMECORE_FIVEDIMGRAVITYSWITCHLINECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C2110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGravitySwitchLineConfig_TypeDefinitionIndex = 18595;

	class FiveDimGravitySwitchLineConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsGravitySwitchLine; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LittleGameDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* ActiveValues; // 0x20
		::Il2CppArray<::System::Int16>* InactiveValues; // 0x28
		::System::Single Length; // 0x30
		::RPG::GameCore::GravitySwitchLineJumpEnergyMode ModifyJumpEnergy; // 0x34
		::System::Single AddJumpCoolDown; // 0x38
		::System::Boolean EnableOverrideMaxFallSpeed; // 0x3C
		::System::Byte _padding1[0x3];
		::System::Single OverrideMaxFallSpeed; // 0x40
		::System::Single TriggerHeight; // 0x44
		::System::Single TriggerOffset; // 0x48
		::System::Byte _padding2[0x4];
		::System::String* LineTraceEffectPath; // 0x50
		::System::String* DeactiveLineTraceEffectPath; // 0x58
		::System::String* PassGravityLineEffectPath; // 0x60
		::System::String* PassGravityLineEffectPathNotFollowRotation; // 0x68
		::System::Single EffectLengthScaleFactor; // 0x70
		::System::Boolean SendEventOnInit; // 0x74
		::System::Byte _padding3[0x3];
		::RPG::GameCore::LittleGameEvent* InactiveEvent; // 0x78
		::RPG::GameCore::LittleGameEvent* ActiveEvent; // 0x80
		::RPG::GameCore::LittleGameEvent* PlayerThroughEvent; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYSWITCHLINECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGravitySwitchLineConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGravitySwitchLineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYSWITCHLINECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGravitySwitchLineConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGravitySwitchLineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYSWITCHLINECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

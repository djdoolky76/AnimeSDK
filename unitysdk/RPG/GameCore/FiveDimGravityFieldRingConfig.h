#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimGravityFieldRingConfig; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D694340)
#define RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D694350)
#define RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D694310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGravityFieldRingConfig_TypeDefinitionIndex = 18596;

	class FiveDimGravityFieldRingConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsGravityFieldRing; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LittleGameDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* ActiveValues; // 0x20
		::Il2CppArray<::System::Int16>* InactiveValues; // 0x28
		::System::Single Radius; // 0x30
		::System::Single CapsuleRadiusWithOutEntityScale; // 0x34
		::System::String* GravityRingRangeEffectPath; // 0x38
		::System::String* GravityRingEnterExitEffectPath; // 0x40
		::System::Boolean SendEventOnInit; // 0x48
		::System::Byte _padding1[0x7];
		::RPG::GameCore::LittleGameEvent* InactiveEvent; // 0x50
		::RPG::GameCore::LittleGameEvent* ActiveEvent; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGravityFieldRingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGravityFieldRingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGravityFieldRingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGravityFieldRingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYFIELDRINGCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

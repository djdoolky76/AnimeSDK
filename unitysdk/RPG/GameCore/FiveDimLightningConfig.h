#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningAttackType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimLightningConfig; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D699650)
#define RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D699670)
#define RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D699610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLightningConfig_TypeDefinitionIndex = 18603;

	class FiveDimLightningConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsLightning; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FiveDimLightningAttackType LightningAttackType; // 0x14
		::System::Single StartAttackIntervalTime; // 0x18
		::System::Single AttackIntervalTime; // 0x1C
		::System::Single AttackPrepareTime; // 0x20
		::System::Single AttackStartupTime; // 0x24
		::System::Single AttackLastTime; // 0x28
		::System::Byte _padding1[0x4];
		::System::String* WarningEffectPath; // 0x30
		::System::String* AttackEffectPath; // 0x38
		::Il2CppArray<::System::UInt32>* AnchorIDList; // 0x40
		::RPG::MVector3 HitBoxSize; // 0x48
		::System::Boolean IsCheckObstruction; // 0x54
		::System::Byte _padding2[0x3];
		::RPG::GameCore::LittleGameEvent* AttackPrepareEvent; // 0x58
		::RPG::GameCore::LittleGameEvent* AttackEvent; // 0x60
		::RPG::GameCore::LittleGameEvent* HitPlayerEvent; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLightningConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLightningConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLightningConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLightningConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

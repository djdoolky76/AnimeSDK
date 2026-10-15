#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimCrystalConfig; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCRYSTALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6893D0)
#define RPG_GAMECORE_FIVEDIMCRYSTALCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6893F0)
#define RPG_GAMECORE_FIVEDIMCRYSTALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D689390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCrystalConfig_TypeDefinitionIndex = 18600;

	class FiveDimCrystalConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsCrystal; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* AnimParameterName; // 0x18
		::System::Int32 MaxHp; // 0x20
		::System::Int32 CurHp; // 0x24
		::RPG::GameCore::FiveDimTriggerShape* DamageTriggerShape; // 0x28
		::RPG::GameCore::FiveDimTriggerShape* RecoverTriggerShape; // 0x30
		::System::Boolean SendEventOnInit; // 0x38
		::System::Byte _padding1[0x7];
		::RPG::GameCore::LittleGameEvent* NormalEvent; // 0x40
		::RPG::GameCore::LittleGameEvent* BrokenEvent; // 0x48
		::RPG::GameCore::LittleGameEvent* DieEvent; // 0x50
		::RPG::GameCore::LittleGameEvent* FreezeEvent; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCRYSTALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCrystalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCrystalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCRYSTALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCrystalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCrystalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCRYSTALCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

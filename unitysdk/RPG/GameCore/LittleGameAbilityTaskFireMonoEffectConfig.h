#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTaskFireMonoEffectConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTASKFIREMONOEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DB080)
#define RPG_GAMECORE_LITTLEGAMEABILITYTASKFIREMONOEFFECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DB0D0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTASKFIREMONOEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DB010)

namespace RPG::GameCore
{
	class LittleGameAbilityTaskFireMonoEffectConfig : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::System::String* EffectResPath; // 0x18
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* TargetSelector; // 0x20
		::System::String* AttachPointName; // 0x28
		::System::Boolean IsAttach; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::MVector3 PositionOffset; // 0x34
		::RPG::MVector3 RotationOffset; // 0x40
		::RPG::MVector3 Scale; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTASKFIREMONOEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTaskFireMonoEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTaskFireMonoEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTASKFIREMONOEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTaskFireMonoEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTaskFireMonoEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTASKFIREMONOEFFECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

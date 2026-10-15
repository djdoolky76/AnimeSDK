#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LightningStrikeAreaConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LIGHTNINGSTRIKEAREACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D0190)
#define RPG_GAMECORE_LIGHTNINGSTRIKEAREACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7CFC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LightningStrikeAreaConfig_TypeDefinitionIndex = 21075;

	class LightningStrikeAreaConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* WarningEffectPath; // 0x10
		::System::String* LightningEffectPath; // 0x18
		::System::Single RandomRadius; // 0x20
		::System::Single WaveStartTime; // 0x24
		::System::Single WaveInterval; // 0x28
		::System::Int32 LightningCount; // 0x2C
		::System::Single LightningInterval; // 0x30
		::System::Single LightningPrepareTime; // 0x34
		::System::Single LightningStartupTime; // 0x38
		::System::Single LightningLastTime; // 0x3C
		::System::Single DamageRadius; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ResetAnchorID; // 0x48
		::Il2CppArray<::System::UInt32>* RandomAnchorList; // 0x50
		::System::String* HitPlayerEvent; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTNINGSTRIKEAREACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LightningStrikeAreaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LightningStrikeAreaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTNINGSTRIKEAREACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UnitHintTriggerConfig; }
namespace System { class String; }

#define RPG_GAMECORE_UNITHINTTRIGGERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC73E80)
#define RPG_GAMECORE_UNITHINTTRIGGERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC73CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnitHintTriggerConfig_TypeDefinitionIndex = 17601;

	class UnitHintTriggerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single TriggerHintRadius; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* HintEffectPath; // 0x18
		::System::String* HintEffectAttachPoint; // 0x20
		::System::Single HintEffectScale; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNITHINTTRIGGERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnitHintTriggerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnitHintTriggerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNITHINTTRIGGERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

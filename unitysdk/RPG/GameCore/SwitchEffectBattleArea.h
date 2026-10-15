#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAreaSwitchStatus.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SwitchEffectBattleArea; }
namespace System { class String; }

#define RPG_GAMECORE_SWITCHEFFECTBATTLEAREA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB41580)
#define RPG_GAMECORE_SWITCHEFFECTBATTLEAREA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB41590)
#define RPG_GAMECORE_SWITCHEFFECTBATTLEAREA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB41550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchEffectBattleArea_TypeDefinitionIndex = 23322;

	class SwitchEffectBattleArea : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* EffectPath; // 0x18
		::RPG::GameCore::BattleAreaSwitchStatus SwitchStatus; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* PriorityKey; // 0x28
		::System::Boolean WaitFinish; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHEFFECTBATTLEAREA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchEffectBattleArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchEffectBattleArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHEFFECTBATTLEAREA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchEffectBattleArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchEffectBattleArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHEFFECTBATTLEAREA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAreaSwitchStatus.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SwitchBattleArea; }
namespace System { class String; }

#define RPG_GAMECORE_SWITCHBATTLEAREA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3F350)
#define RPG_GAMECORE_SWITCHBATTLEAREA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB3F360)
#define RPG_GAMECORE_SWITCHBATTLEAREA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3F320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchBattleArea_TypeDefinitionIndex = 23321;

	class SwitchBattleArea : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AreaName; // 0x18
		::RPG::GameCore::DynamicString* TagName; // 0x20
		::RPG::GameCore::DynamicFloat* UnifiedId; // 0x28
		::RPG::GameCore::BattleAreaSwitchStatus SwitchStatus; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* PriorityKey; // 0x38
		::System::Boolean WaitFinish; // 0x40
		::System::Byte _padding1[0x3];
		::RPG::MVector3 RootPosition; // 0x44
		::RPG::MVector3 RootRotation; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBATTLEAREA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchBattleArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchBattleArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBATTLEAREA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchBattleArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchBattleArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBATTLEAREA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class MonsterEnergyBarBaseClickConfig; }
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace RPG::GameCore { class SetMonsterEnergyBarState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define RPG_GAMECORE_SETMONSTERENERGYBARSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABB240)
#define RPG_GAMECORE_SETMONSTERENERGYBARSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABB2A0)
#define RPG_GAMECORE_SETMONSTERENERGYBARSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABB1C0)

namespace RPG::GameCore
{
	class SetMonsterEnergyBarState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::BoolEx Active; // 0x20
		::RPG::GameCore::BoolEx EnableSelectedState; // 0x24
		::RPG::GameCore::EnergyBarState State; // 0x28
		::System::Int32 CenterStyle; // 0x2C
		::System::Int32 OuterState; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* IconPath; // 0x38
		::System::String* UIEffectPath; // 0x40
		::RPG::GameCore::DynamicFloat* MaxCount; // 0x48
		::RPG::GameCore::DynamicFloat* CurrentCount; // 0x50
		::RPG::GameCore::DynamicFloat* ShowCount; // 0x58
		::RPG::GameCore::MonsterEnergyBarType EnergyBarType; // 0x60
		::System::Byte _padding1[0x4];
		::System::String* CustomPrefabPath; // 0x68
		::Il2CppArray<::RPG::GameCore::UITextNode*>* UITextNodes; // 0x70
		::System::Int32 BossDotStyle; // 0x78
		::System::Byte _padding2[0x4];
		::Il2CppArray<::System::String*>* EnergyDotPrefabPaths; // 0x80
		::System::String* TriggerName; // 0x88
		::System::String* SpecialEffPath; // 0x90
		::RPG::GameCore::MonsterEnergyBarNumColor NumColor; // 0x98
		::System::Byte _padding3[0x4];
		::RPG::GameCore::MonsterEnergyBarCustomColor* CustomColor; // 0xA0
		::RPG::GameCore::MonsterEnergyBarBaseClickConfig* ClickConfig; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERENERGYBARSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterEnergyBarState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERENERGYBARSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterEnergyBarState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERENERGYBARSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetEnergyBarState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETENERGYBARSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA81FF0)
#define RPG_GAMECORE_SETENERGYBARSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA82140)
#define RPG_GAMECORE_SETENERGYBARSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA81FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEnergyBarState_TypeDefinitionIndex = 22737;

	class SetEnergyBarState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::BoolEx Active; // 0x20
		::System::Int32 BarType; // 0x24
		::RPG::GameCore::EnergyBarState CurrentState; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CD; // 0x30
		::System::String* IconPath; // 0x38
		::RPG::GameCore::DynamicFloat* MaxCount; // 0x40
		::RPG::GameCore::DynamicFloat* CurrentCount; // 0x48
		::RPG::GameCore::DynamicFloat* ActiveCount; // 0x50
		::System::String* PrefabPath; // 0x58
		::Il2CppArray<::System::String*>* EnergyDotPrefabPaths; // 0x60
		::System::Boolean SkipInCharmAction; // 0x68
		::System::Byte _padding1[0x3];
		::RPG::GameCore::BoolEx ShowEnhancedTextColor; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENERGYBARSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEnergyBarState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENERGYBARSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEnergyBarState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENERGYBARSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

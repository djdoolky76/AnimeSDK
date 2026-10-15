#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetGridFightBEEnergyBarState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETGRIDFIGHTBEENERGYBARSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB50F0)
#define RPG_GAMECORE_SETGRIDFIGHTBEENERGYBARSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB5220)
#define RPG_GAMECORE_SETGRIDFIGHTBEENERGYBARSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB50B0)

namespace RPG::GameCore
{
	class SetGridFightBEEnergyBarState : public ::RPG::GameCore::TaskConfig
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
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRIDFIGHTBEENERGYBARSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetGridFightBEEnergyBarState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetGridFightBEEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRIDFIGHTBEENERGYBARSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetGridFightBEEnergyBarState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetGridFightBEEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRIDFIGHTBEENERGYBARSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

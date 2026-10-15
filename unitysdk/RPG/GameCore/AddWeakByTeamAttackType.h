#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddWeakByTeamAttackType; }
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADDWEAKBYTEAMATTACKTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38D000)
#define RPG_GAMECORE_ADDWEAKBYTEAMATTACKTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38D010)
#define RPG_GAMECORE_ADDWEAKBYTEAMATTACKTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38CFD0)

namespace RPG::GameCore
{
	class AddWeakByTeamAttackType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* ResistanceDeltaValue; // 0x20
		::RPG::GameCore::DynamicFloat* AddWeakCountMax; // 0x28
		::Il2CppArray<::System::String*>* ReturnWeakType; // 0x30
		::System::Boolean BlockUIRefresh; // 0x38
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNoNewWeak; // 0x40
		::RPG::GameCore::AttackDamageTypeConfig* PreferWeak; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDWEAKBYTEAMATTACKTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddWeakByTeamAttackType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddWeakByTeamAttackType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDWEAKBYTEAMATTACKTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddWeakByTeamAttackType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddWeakByTeamAttackType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDWEAKBYTEAMATTACKTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

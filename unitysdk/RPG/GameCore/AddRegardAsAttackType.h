#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddRegardAsAttackType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADDREGARDASATTACKTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38B4C0)
#define RPG_GAMECORE_ADDREGARDASATTACKTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38B4D0)
#define RPG_GAMECORE_ADDREGARDASATTACKTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38B490)

namespace RPG::GameCore
{
	class AddRegardAsAttackType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AttackType OriginalAttackType; // 0x28
		::RPG::GameCore::AttackType RegardAttackType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDREGARDASATTACKTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddRegardAsAttackType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddRegardAsAttackType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDREGARDASATTACKTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddRegardAsAttackType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddRegardAsAttackType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDREGARDASATTACKTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

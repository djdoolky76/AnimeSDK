#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearRegardAsAttackType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CLEARREGARDASATTACKTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B6E10)
#define RPG_GAMECORE_CLEARREGARDASATTACKTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B6E20)
#define RPG_GAMECORE_CLEARREGARDASATTACKTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B6DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearRegardAsAttackType_TypeDefinitionIndex = 23210;

	class ClearRegardAsAttackType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AttackType OriginalAttackType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARREGARDASATTACKTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearRegardAsAttackType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearRegardAsAttackType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARREGARDASATTACKTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearRegardAsAttackType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearRegardAsAttackType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARREGARDASATTACKTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

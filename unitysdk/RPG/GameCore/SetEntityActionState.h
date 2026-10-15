#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetEntityActionState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETENTITYACTIONSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAFF70)
#define RPG_GAMECORE_SETENTITYACTIONSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAFF80)
#define RPG_GAMECORE_SETENTITYACTIONSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAFF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityActionState_TypeDefinitionIndex = 22653;

	class SetEntityActionState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean ActionState; // 0x28
		::System::Boolean CancelInsertUltra; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYACTIONSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityActionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityActionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYACTIONSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityActionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityActionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYACTIONSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

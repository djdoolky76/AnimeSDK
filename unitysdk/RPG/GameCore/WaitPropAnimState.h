#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitPropAnimState; }
namespace System { class String; }

#define RPG_GAMECORE_WAITPROPANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC708F0)
#define RPG_GAMECORE_WAITPROPANIMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC70900)
#define RPG_GAMECORE_WAITPROPANIMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC708C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropAnimState_TypeDefinitionIndex = 20686;

	class WaitPropAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AnimState; // 0x20
		::RPG::GameCore::DynamicFloat* NormalizedTime; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ForwardCallback; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BackwardCallback; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPANIMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPropAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPropAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPANIMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPropAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPropAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPANIMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

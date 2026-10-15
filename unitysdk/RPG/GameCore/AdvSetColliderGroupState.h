#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetColliderGroupState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVSETCOLLIDERGROUPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3813C0)
#define RPG_GAMECORE_ADVSETCOLLIDERGROUPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3813D0)
#define RPG_GAMECORE_ADVSETCOLLIDERGROUPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D381390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetColliderGroupState_TypeDefinitionIndex = 20532;

	class AdvSetColliderGroupState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* GroupName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCOLLIDERGROUPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetColliderGroupState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetColliderGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCOLLIDERGROUPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetColliderGroupState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetColliderGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCOLLIDERGROUPSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

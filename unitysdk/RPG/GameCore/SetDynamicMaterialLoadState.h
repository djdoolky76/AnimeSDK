#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicMaterialLoadState; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9F600)
#define RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9F640)
#define RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9F5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicMaterialLoadState_TypeDefinitionIndex = 22809;

	class SetDynamicMaterialLoadState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Load; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicMaterialLoadState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicMaterialLoadState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicMaterialLoadState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicMaterialLoadState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

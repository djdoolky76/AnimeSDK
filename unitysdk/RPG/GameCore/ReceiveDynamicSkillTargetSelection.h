#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ReceiveDynamicSkillTargetSelection; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D943200)
#define RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D943210)
#define RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9431D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReceiveDynamicSkillTargetSelection_TypeDefinitionIndex = 22843;

	class ReceiveDynamicSkillTargetSelection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReceive; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEmpty; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReceiveDynamicSkillTargetSelection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReceiveDynamicSkillTargetSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReceiveDynamicSkillTargetSelection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReceiveDynamicSkillTargetSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECEIVEDYNAMICSKILLTARGETSELECTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

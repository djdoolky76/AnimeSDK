#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OnTimeRewindParentPropStateChangeEnd; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B31C0)
#define RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B31D0)
#define RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B3180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OnTimeRewindParentPropStateChangeEnd_TypeDefinitionIndex = 20653;

	class OnTimeRewindParentPropStateChangeEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x20
		::System::Boolean IsLoop; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

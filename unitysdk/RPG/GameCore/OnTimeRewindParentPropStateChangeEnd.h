#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OnTimeRewindParentPropStateChangeEnd; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E0B80)
#define RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E0B90)
#define RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E0B40)

namespace RPG::GameCore
{
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

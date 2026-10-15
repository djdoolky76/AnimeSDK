#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropReqInteract; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PROPREQINTERACT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D952B10)
#define RPG_GAMECORE_PROPREQINTERACT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D952B40)
#define RPG_GAMECORE_PROPREQINTERACT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D952AC0)

namespace RPG::GameCore
{
	class PropReqInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean TargetIsTalkTrigger; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* InteractID; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUICancel; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCheckItemFail; // 0x38
		::System::Boolean EnableAdvanceInteract; // 0x40
		::System::Boolean ForceIgnoreCMDBlock; // 0x41
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPREQINTERACT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropReqInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropReqInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPREQINTERACT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropReqInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropReqInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPREQINTERACT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

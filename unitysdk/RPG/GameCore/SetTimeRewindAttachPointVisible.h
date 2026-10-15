#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetTimeRewindAttachPointVisible; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTIMEREWINDATTACHPOINTVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC79C0)
#define RPG_GAMECORE_SETTIMEREWINDATTACHPOINTVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC79D0)
#define RPG_GAMECORE_SETTIMEREWINDATTACHPOINTVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC7990)

namespace RPG::GameCore
{
	class SetTimeRewindAttachPointVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicString* AttachPointName; // 0x20
		::System::Single TransitionTime; // 0x28
		::System::Boolean Visible; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDATTACHPOINTVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTimeRewindAttachPointVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTimeRewindAttachPointVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDATTACHPOINTVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTimeRewindAttachPointVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTimeRewindAttachPointVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDATTACHPOINTVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

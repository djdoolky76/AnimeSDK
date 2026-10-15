#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTimeRewindEntityDisableControl; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTIMEREWINDENTITYDISABLECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC7F80)
#define RPG_GAMECORE_SETTIMEREWINDENTITYDISABLECONTROL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC7F90)
#define RPG_GAMECORE_SETTIMEREWINDENTITYDISABLECONTROL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC7F50)

namespace RPG::GameCore
{
	class SetTimeRewindEntityDisableControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean Disable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYDISABLECONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTimeRewindEntityDisableControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTimeRewindEntityDisableControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYDISABLECONTROL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTimeRewindEntityDisableControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTimeRewindEntityDisableControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYDISABLECONTROL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

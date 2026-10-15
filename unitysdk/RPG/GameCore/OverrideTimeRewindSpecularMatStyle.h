#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TimeRewindSpecularMatStyle.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideTimeRewindSpecularMatStyle; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OVERRIDETIMEREWINDSPECULARMATSTYLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E9950)
#define RPG_GAMECORE_OVERRIDETIMEREWINDSPECULARMATSTYLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E9960)
#define RPG_GAMECORE_OVERRIDETIMEREWINDSPECULARMATSTYLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E9920)

namespace RPG::GameCore
{
	class OverrideTimeRewindSpecularMatStyle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::TimeRewindSpecularMatStyle Style; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDETIMEREWINDSPECULARMATSTYLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideTimeRewindSpecularMatStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideTimeRewindSpecularMatStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDETIMEREWINDSPECULARMATSTYLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideTimeRewindSpecularMatStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideTimeRewindSpecularMatStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDETIMEREWINDSPECULARMATSTYLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearTargetTimeSlow; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CLEARTARGETTIMESLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B73A0)
#define RPG_GAMECORE_CLEARTARGETTIMESLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B73B0)
#define RPG_GAMECORE_CLEARTARGETTIMESLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B7360)

namespace RPG::GameCore
{
	class ClearTargetTimeSlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SlowKey; // 0x20
		::System::Boolean FadeOut; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTARGETTIMESLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearTargetTimeSlow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearTargetTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTARGETTIMESLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearTargetTimeSlow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearTargetTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTARGETTIMESLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

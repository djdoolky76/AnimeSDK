#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetTimeSlow; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETTIMESLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB46C80)
#define RPG_GAMECORE_TARGETTIMESLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB46D30)
#define RPG_GAMECORE_TARGETTIMESLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB46BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetTimeSlow_TypeDefinitionIndex = 23115;

	class TargetTimeSlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single ActiveDelay; // 0x20
		::System::Single TimeScale; // 0x24
		::System::Boolean Infinite; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single UnscaledDuration; // 0x2C
		::RPG::GameCore::DynamicFloat* FadeInTime; // 0x30
		::RPG::GameCore::DynamicFloat* FadeOutTime; // 0x38
		::System::String* FadeInCurveName; // 0x40
		::System::String* FadeOutCurveName; // 0x48
		::System::String* SlowKey; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTIMESLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetTimeSlow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTIMESLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetTimeSlow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTIMESLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

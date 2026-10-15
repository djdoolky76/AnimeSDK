#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TimeSlowCurve.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GlobalTimeSlow; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_GLOBALTIMESLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F2360)
#define RPG_GAMECORE_GLOBALTIMESLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F2410)
#define RPG_GAMECORE_GLOBALTIMESLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F2290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalTimeSlow_TypeDefinitionIndex = 20886;

	class GlobalTimeSlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* TimeScale; // 0x18
		::System::Boolean Infinite; // 0x20
		::System::Boolean ActiveNextFrame; // 0x21
		::System::Byte _padding0[0x6];
		::RPG::GameCore::DynamicFloat* UnscaledDuration; // 0x28
		::RPG::GameCore::DynamicFloat* FadeInTime; // 0x30
		::RPG::GameCore::DynamicFloat* FadeOutTime; // 0x38
		::System::String* FadeInCurveName; // 0x40
		::System::String* FadeOutCurveName; // 0x48
		::RPG::GameCore::TimeSlowCurve Curve; // 0x50
		::System::Byte _padding1[0x4];
		::System::String* SlowKey; // 0x58
		::RPG::GameCore::TargetEvaluator* IgnoreTargetType; // 0x60
		::RPG::GameCore::EntityTypeMask IgnoreEntityTypeMask; // 0x68
		::System::Byte _padding2[0x4];
		::System::Boolean RemoveOnLockPlayerControl; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALTIMESLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalTimeSlow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALTIMESLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalTimeSlow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALTIMESLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

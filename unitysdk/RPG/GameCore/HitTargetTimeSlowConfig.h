#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class HitTargetTimeSlowConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HITTARGETTIMESLOWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D742FE0)
#define RPG_GAMECORE_HITTARGETTIMESLOWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D742BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HitTargetTimeSlowConfig_TypeDefinitionIndex = 22594;

	class HitTargetTimeSlowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ActiveDelay; // 0x10
		::System::Single TimeScale; // 0x14
		::System::Boolean Infinite; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single UnscaledDuration; // 0x1C
		::RPG::GameCore::DynamicFloat* FadeInTime; // 0x20
		::RPG::GameCore::DynamicFloat* FadeOutTime; // 0x28
		::System::String* FadeInCurveName; // 0x30
		::System::String* FadeOutCurveName; // 0x38
		::System::String* SlowKey; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITTARGETTIMESLOWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HitTargetTimeSlowConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HitTargetTimeSlowConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITTARGETTIMESLOWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

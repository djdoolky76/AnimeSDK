#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VibrationConfig; }
namespace System { class String; }

#define RPG_GAMECORE_VIBRATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC61470)
#define RPG_GAMECORE_VIBRATIONCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC61240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VibrationConfig_TypeDefinitionIndex = 16403;

	class VibrationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* IntensityRTPCName; // 0x10
		::System::String* EventVibrationSetting; // 0x18
		::System::String* MotionLevelStateGroup; // 0x20
		::System::String* MotionLevelStateA; // 0x28
		::System::String* MotionLevelStateC; // 0x30
		::Il2CppArray<::System::UInt32>* MotionLevelAWhiteList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIBRATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::VibrationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VibrationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIBRATIONCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

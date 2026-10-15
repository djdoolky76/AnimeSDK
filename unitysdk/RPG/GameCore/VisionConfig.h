#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/VisionBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VisionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_VISIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC90730)
#define RPG_GAMECORE_VISIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC90770)
#define RPG_GAMECORE_VISIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC90A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VisionConfig_TypeDefinitionIndex = 17512;

	class VisionConfig : public ::RPG::GameCore::VisionBaseConfig
	{
	public:
		::System::Single DistanceRange; // 0x18
		::System::Single YawAngleRange; // 0x1C
		::System::Single PitchAngleLimitMin; // 0x20
		::System::Single PitchAngleLimitMax; // 0x24
		::System::Single AlertIntervalLeftValue; // 0x28
		::System::Single AlertIntervalRightValue; // 0x2C
		::System::String* RayStartPointName; // 0x30
		::System::String* RayEndPointName; // 0x38
		::Il2CppArray<::RPG::GameCore::EntityTag>* ExcludeEntityTags; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VisionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VisionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

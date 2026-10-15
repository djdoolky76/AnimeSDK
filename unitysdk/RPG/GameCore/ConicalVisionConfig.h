#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/VisionBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConicalVisionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CONICALVISIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A8910)
#define RPG_GAMECORE_CONICALVISIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A8950)
#define RPG_GAMECORE_CONICALVISIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A88A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConicalVisionConfig_TypeDefinitionIndex = 19999;

	class ConicalVisionConfig : public ::RPG::GameCore::VisionBaseConfig
	{
	public:
		::System::Single DistanceRange; // 0x18
		::System::Single AngleRange; // 0x1C
		::System::Single AlertIntervalLeftValue; // 0x20
		::System::Single AlertIntervalRightValue; // 0x24
		::System::String* AttachedPointName; // 0x28
		::System::String* TargetPivotPointName; // 0x30
		::System::String* TargetRayPointName; // 0x38
		::Il2CppArray<::RPG::GameCore::EntityTag>* ExcludeEntityTags; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONICALVISIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConicalVisionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConicalVisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONICALVISIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConicalVisionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConicalVisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONICALVISIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

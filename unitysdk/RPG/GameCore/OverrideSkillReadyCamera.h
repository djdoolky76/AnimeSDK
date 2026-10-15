#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideSkillReadyCamera; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDESKILLREADYCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E9370)
#define RPG_GAMECORE_OVERRIDESKILLREADYCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E9380)
#define RPG_GAMECORE_OVERRIDESKILLREADYCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E9340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideSkillReadyCamera_TypeDefinitionIndex = 22837;

	class OverrideSkillReadyCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SkillName; // 0x20
		::RPG::GameCore::VCameraConfig* CameraConfig; // 0x28
		::RPG::GameCore::VCameraConfig* CameraConfigAdded; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLREADYCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideSkillReadyCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideSkillReadyCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLREADYCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideSkillReadyCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideSkillReadyCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLREADYCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
